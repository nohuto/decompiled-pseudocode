/*
 * XREFs of ?GetView@ViewHeirarchy@@UEBA?AV?$ComPtr@UIMonitorView@Server@Navigation@@@WRL@Microsoft@@I@Z @ 0x18006DDC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall ViewHeirarchy::GetView(_QWORD *a1, char *a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 i; // rcx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // r11
  __int64 *j; // rax
  __int64 *v14; // rcx
  char v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+40h] [rbp+18h]

  v17 = a3;
  if ( a1[4] )
  {
    *(_QWORD *)a2 = 0LL;
  }
  else
  {
    v5 = 0LL;
    v6 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
    {
      v8 = *((unsigned __int8 *)&v17 + i);
      v6 = 0x100000001B3LL * (v8 ^ v6);
    }
    v9 = a1[11];
    v10 = v6 & a1[14];
    v11 = (__int64 *)a1[9];
    v12 = 2 * v10;
    for ( j = *(__int64 **)(v9 + 16 * v10); ; j = (__int64 *)*j )
    {
      v14 = *(__int64 **)(v9 + 8 * v12) == v11 ? (__int64 *)a1[9] : **(__int64 ***)(v9 + 8 * v12 + 8);
      if ( j == v14 )
        break;
      if ( a3 == *((_DWORD *)j + 4) )
        goto LABEL_14;
    }
    j = (__int64 *)a1[9];
LABEL_14:
    if ( j != v11 && j[3] )
    {
      v5 = j[3];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    *(_QWORD *)a2 = 0LL;
    if ( a2 != &v16 )
    {
      *(_QWORD *)a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a2;
}
