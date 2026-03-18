/*
 * XREFs of Crashdump_Register_Initialize @ 0x1C0034F0C
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x1C0034910 (Crashdump_UcxEvtGetDumpData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Register_Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 result; // rax
  int v6; // r8d
  __int64 v7; // rcx

  v3 = *(_QWORD *)(a3 + 104);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a3 + 232);
  result = *(unsigned int *)(a2 + 80);
  *(_DWORD *)(a1 + 16) = result;
  v6 = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 20) = v6;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 24LL);
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 16LL);
    result = (unsigned int)(8 * v6);
    *(_DWORD *)(a1 + 40) = result;
    *(_QWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v3 + 48);
  }
  return result;
}
