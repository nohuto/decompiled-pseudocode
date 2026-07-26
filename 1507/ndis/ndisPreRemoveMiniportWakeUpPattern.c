/*
 * XREFs of ndisPreRemoveMiniportWakeUpPattern @ 0x1C00CAC34
 * Callers:
 *     ndisOidPrePMRemoveWOLPattern @ 0x1C00CA370 (ndisOidPrePMRemoveWOLPattern.c)
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00CA700 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 */

char __fastcall ndisPreRemoveMiniportWakeUpPattern(__int64 a1, __int64 a2)
{
  char v2; // r12
  char v4; // si
  char v6; // r14
  __int64 i; // rcx
  __int64 v8; // r13
  __int64 *j; // rbx
  _DWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  _QWORD *k; // rax
  unsigned int v15; // [rsp+70h] [rbp+8h]
  unsigned int v16; // [rsp+78h] [rbp+10h]
  int v17; // [rsp+80h] [rbp+18h]
  int v18; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v4 = 0;
  v6 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(0x23u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2);
    v6 = byte_1C0085312;
  }
  for ( i = a2 + 72; (*(_DWORD *)(i + 16) & 0x4000) != 0; i = *(_QWORD *)(i + 24) + 72LL )
    ;
  v8 = *(_QWORD *)(i + 32);
  for ( j = *(__int64 **)(a1 + 960); ; j = (__int64 *)*j )
  {
    if ( !j )
      goto LABEL_25;
    v10 = *(_DWORD **)(a2 + 40);
    if ( v10[4] == *((_DWORD *)j + 16) && v10[2] == *((_DWORD *)j + 14) )
      break;
LABEL_12:
    ;
  }
  v15 = v10[3];
  v16 = *((_DWORD *)j + 15);
  v17 = v10[1];
  v11 = *((_DWORD *)j + 13);
  v10[3] = 0;
  *((_DWORD *)j + 15) = 0;
  v10[1] = 0;
  v12 = *((unsigned int *)j + 14);
  *((_DWORD *)j + 13) = 0;
  v18 = v11;
  if ( memcmp(v10, j + 6, v12 + 24) || memcmp((char *)v10 + v15, (char *)j + v16 + 48, *((unsigned int *)j + 16)) )
  {
    v10[3] = v15;
    *((_DWORD *)j + 15) = v16;
    goto LABEL_12;
  }
  if ( v8 == j[3] )
  {
    v2 = 1;
    if ( j[1] )
      v4 = 1;
  }
  else
  {
    for ( k = (_QWORD *)j[1]; k; k = (_QWORD *)*k )
    {
      if ( k[2] == v8 )
      {
        v2 = 1;
        v4 = 1;
        break;
      }
    }
  }
  v10[3] = v15;
  *((_DWORD *)j + 15) = v16;
  v10[1] = v17;
  *((_DWORD *)j + 13) = v18;
  if ( !v2 )
LABEL_25:
    v4 = 1;
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qq(0x24u, &WPP_fbb1998797815902974a7c4233493709_Traceguids, a1, a2);
  return v4;
}
