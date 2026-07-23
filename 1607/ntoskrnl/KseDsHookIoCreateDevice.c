/*
 * XREFs of KseDsHookIoCreateDevice @ 0x1401DD26C
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventIoCreateDevice @ 0x1401DD954 (KsepDsEventIoCreateDevice.c)
 */

__int64 __fastcall KseDsHookIoCreateDevice(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, char a6, __int64 *a7)
{
  int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v12; // [rsp+28h] [rbp-30h]

  v8 = a1;
  v12 = qword_1402F47E8(a1, a2, a3);
  v9 = v12;
  if ( v12 < 0 )
    LODWORD(v10) = 0;
  else
    v10 = *a7;
  KsepDsEventIoCreateDevice(v8, v10, a4, a5, a6, v12);
  return v9;
}
