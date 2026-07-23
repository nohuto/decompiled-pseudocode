/*
 * XREFs of PfpPfnPrioRequest @ 0x14041A310
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     MiIdentifyPfnWrapper @ 0x14000F770 (MiIdentifyPfnWrapper.c)
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     MmSetPfnListPriorities @ 0x1400BC000 (MmSetPfnListPriorities.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14041A0E0 (PfpCopyUserPfnPrioRequest.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     MmRelocatePfnList @ 0x1406647DC (MmRelocatePfnList.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpPfnPrioRequest(__int64 a1, char a2, unsigned int *a3)
{
  _OWORD *v5; // rsi
  int v6; // r8d
  unsigned int v7; // edx
  __int64 v8; // r8
  int v9; // r15d
  char *v10; // rbx
  char *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned int v17; // ebx
  unsigned int v19; // edx
  char *v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  _DWORD *v23; // [rsp+38h] [rbp-40h]
  int v24; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v25; // [rsp+90h] [rbp+18h]
  void *Src; // [rsp+98h] [rbp+20h] BYREF

  v25 = a3;
  v5 = 0LL;
  Src = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 6 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( v7 < 0xD8 )
    {
      v9 = -1073741306;
      goto LABEL_24;
    }
    v9 = PfpCopyUserPfnPrioRequest(*(_QWORD *)(a1 + 16), v7, 6, &Src, a2, 1);
    if ( v9 >= 0 )
    {
      v5 = Src;
      v10 = (char *)Src + 192;
      v23 = (char *)Src + 8;
      v9 = 0;
      v11 = (char *)Src + 24 * *((_QWORD *)Src + 1) + 192;
      if ( (char *)Src + 192 < v11 )
      {
        while ( MiIsPfn(*((_QWORD *)v10 + 1)) )
        {
          MiIdentifyPfnWrapper(v13 + 48 * v12, (__int64)v10);
          v10 += 24;
          if ( v10 >= v11 )
            goto LABEL_7;
        }
        *((_QWORD *)v10 + 2) |= 2uLL;
        v9 = -1073741584;
      }
LABEL_7:
      if ( v9 >= 0 && (*((_DWORD *)v5 + 1) & 1) != 0 )
        MmQueryMemoryListInformation(v5 + 1, 0xB0u, v8, &v24);
      if ( a2 )
      {
        v14 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(a1 + 24) )
        {
          if ( (v14 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = v14 + *(unsigned int *)(a1 + 24) - 1LL;
          if ( v14 > v15 || v15 >= 0x7FFFFFFF0000LL )
          {
            if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
              ExRaiseAccessViolation();
            v5 = Src;
          }
          else
          {
            v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            do
            {
              *(_BYTE *)v14 = *(_BYTE *)v14;
              v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            }
            while ( v14 != v16 );
            v5 = Src;
          }
        }
      }
      v17 = 24 * (*v23 + 8);
      memmove(*(void **)(a1 + 16), v5, v17);
      goto LABEL_23;
    }
  }
  else
  {
    if ( v6 != 7 && v6 != 22 )
    {
      v9 = -1073741821;
      goto LABEL_24;
    }
    v19 = *(_DWORD *)(a1 + 24);
    if ( v19 < 0xD8 )
    {
      v9 = -1073741306;
      goto LABEL_24;
    }
    v9 = PfpCopyUserPfnPrioRequest(*(_QWORD *)(a1 + 16), v19, v6, &Src, a2, 0);
    if ( v9 >= 0 )
    {
      v5 = Src;
      v20 = (char *)Src + 192;
      v21 = *((_QWORD *)Src + 1);
      if ( *(_DWORD *)(a1 + 8) == 7 )
        v22 = MmSetPfnListPriorities(v21, (unsigned __int64)v20);
      else
        v22 = MmRelocatePfnList(v21, v20, *((unsigned __int16 *)Src + 2), *((unsigned __int16 *)Src + 3));
      v9 = v22;
      if ( a2 )
        ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
      v17 = 24 * (*((_DWORD *)v5 + 2) + 8);
      memmove(*(void **)(a1 + 16), v5, v17);
LABEL_23:
      *v25 = v17;
      goto LABEL_24;
    }
  }
  v5 = Src;
LABEL_24:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v9;
}
