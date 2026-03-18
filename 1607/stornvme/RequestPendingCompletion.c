/*
 * XREFs of RequestPendingCompletion @ 0x1C00029B0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C00028B0 (NVMeHwMSIInterrupt.c)
 *     NVMeHwInterrupt @ 0x1C0004E30 (NVMeHwInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C00047E8 (IsInternalSrb.c)
 */

__int64 __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rbx
  _WORD *v4; // rax
  unsigned __int8 v5; // si
  __int64 v7; // r8
  unsigned int v8; // edx
  unsigned __int16 v9; // bp
  __int16 v10; // r14
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 SrbExtension; // r15

  if ( a2 == 0xFFFF )
  {
    v3 = a1 + 376;
    v4 = (_WORD *)(*(_QWORD *)(a1 + 376) + 16LL * *(unsigned __int16 *)(a1 + 474));
    if ( (v4[7] & 1) == *(_WORD *)(a1 + 476) )
    {
      v7 = *(_QWORD *)(a1 + 552);
      v5 = 0;
      v8 = 0;
      if ( v7 )
      {
        while ( v8 < *(unsigned __int16 *)(a1 + 234) )
        {
          v3 = v7 + 168LL * v8;
          v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 98));
          if ( (v4[7] & 1) != *(_WORD *)(v3 + 100) )
            goto LABEL_5;
          v5 = 0;
          ++v8;
        }
      }
      return v5;
    }
LABEL_5:
    v5 = 1;
    if ( (*(_DWORD *)(a1 + 88) & 2) != 0 )
    {
      v9 = *(_WORD *)(v3 + 98);
      v10 = *(_WORD *)(v3 + 100);
      if ( (v4[7] & 1) != v10 )
      {
        do
        {
          v11 = v4[5];
          v12 = v4[6];
          if ( *(_WORD *)(v3 + 96) && (*(_DWORD *)(a1 + 20) & 1) == 0 )
            break;
          if ( v11 )
          {
            v13 = *(_WORD *)(a1 + 230);
            v14 = *(_QWORD *)(a1 + 544) + 136LL * (v11 - 1);
          }
          else
          {
            v13 = *(_WORD *)(a1 + 228);
            v14 = a1 + 240;
          }
          v15 = *(_QWORD *)(v14 + 32);
          if ( !*(_QWORD *)(v15 + 16LL * v12) || (unsigned __int8)IsInternalSrb(a1, *(_QWORD *)(v15 + 16LL * v12)) )
            break;
          SrbExtension = GetSrbExtension(v16);
          if ( *(_QWORD *)(SrbExtension + 4160) )
          {
            StorPortExtendedFunction(47LL, a1, 0LL);
            *(_QWORD *)(SrbExtension + 4176) = 0LL;
          }
          if ( v9 >= v13 - 1 )
          {
            v9 = 0;
            v10 = v10 != 1;
          }
          else
          {
            ++v9;
          }
          v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * v9);
        }
        while ( (v4[7] & 1) != v10 );
        return 1;
      }
    }
    return v5;
  }
  if ( a2 )
    v3 = *(_QWORD *)(a1 + 552) + 168LL * (a2 - 1);
  else
    v3 = a1 + 376;
  v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 98));
  if ( (v4[7] & 1) != *(_WORD *)(v3 + 100) )
    goto LABEL_5;
  return 0LL;
}
