/*
 * XREFs of LookupEntryPoint @ 0x140123ADC
 * Callers:
 *     MiCompactServiceTable @ 0x140506EA0 (MiCompactServiceTable.c)
 *     PspInitializeSystemDlls @ 0x1407620E0 (PspInitializeSystemDlls.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     sub_140123B70 @ 0x140123B70 (sub_140123B70.c)
 */

__int64 __fastcall LookupEntryPoint(char *a1, int a2, _QWORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  unsigned __int16 v8; // ax
  ULONG v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = RtlImageDirectoryEntryToData(a1, 1u, 0, &v10);
  v7 = v6;
  if ( !v6 )
    return 3221225485LL;
  v8 = sub_140123B70(a2, (_DWORD)a1, v6[6], (int)a1 + v6[8], (__int64)&a1[v6[9]]);
  if ( (unsigned int)v8 >= v7[5] )
    return 3221225594LL;
  *a3 = &a1[*(unsigned int *)&a1[4 * v8 + v7[7]]];
  return 0LL;
}
