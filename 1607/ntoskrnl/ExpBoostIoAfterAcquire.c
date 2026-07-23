/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x14006B1F0
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1400341E0 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140132C38 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     ExpLockResource @ 0x14005D6E0 (ExpLockResource.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140061FA0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     ExpUnlockResource @ 0x140066870 (ExpUnlockResource.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  int v5; // edi
  __int64 v6; // rax
  int v7; // edx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  __int64 ExtensionTable; // rax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_WORD *)(a1 + 26);
  if ( (v2 & 8) == 0 )
  {
    v5 = 0;
    if ( (v2 & 4) != 0 )
    {
      v6 = *(_QWORD *)(a2 + 544);
      v7 = (*(_DWORD *)(a2 + 1728) >> 9) & 7;
      if ( (*(_DWORD *)(v6 + 772) & 0x100000) != 0 || v7 < 2 )
        v5 = 4;
    }
    if ( (v2 & 2) != 0 )
      v5 |= 2u;
    if ( v5 )
    {
      ExpLockResource(a1, (__int64)v15);
      v9 = *(_QWORD *)(a1 + 48);
      v10 = a1 + 48;
      if ( v9 != a2 )
      {
        v11 = *(_QWORD *)(a1 + 16);
        v12 = 0LL;
        v8 = v9 != 0;
        v13 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
        if ( v11 && (v10 = v11 + 16, v8 < v13) )
        {
          while ( *(_QWORD *)v10 != a2 )
          {
            if ( *(_QWORD *)v10 )
            {
              if ( ++v8 == v13 )
                goto LABEL_18;
            }
            else if ( !v12 )
            {
              v12 = v10;
            }
            v10 += 16LL;
            if ( v10 == v11 + 16LL * *(unsigned int *)(v11 + 8) )
              goto LABEL_18;
          }
          v8 = (v10 - v11) >> 4;
          KeGetCurrentThread()->SchedulerApc.SpareByte0 = v8;
        }
        else
        {
LABEL_18:
          v10 = 0LL;
        }
      }
      if ( (v5 & 4) != 0 )
      {
        if ( (*(_DWORD *)(v10 + 8) & 1) != 0 )
        {
          v5 &= ~4u;
        }
        else
        {
          PsBoostThreadIoEx(a2, 0, 0, 0LL);
          *(_DWORD *)(v10 + 8) |= 1u;
        }
      }
      if ( (v5 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v10 + 8) & 4) != 0 )
        {
          v5 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1788)) == 1 )
            KeAbProcessEffectiveIoPriorityChange(a2, 0);
          *(_DWORD *)(v10 + 8) |= 4u;
        }
      }
      ExpUnlockResource(v8, (__int64)v15);
      if ( v5 )
      {
        if ( (v5 & 4) != 0 )
          IoBoostThreadIoPriority(a2, 2LL, 0LL);
        if ( (v5 & 2) != 0 && *(_DWORD *)(a2 + 1792) )
        {
          ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a2);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
    }
  }
}
