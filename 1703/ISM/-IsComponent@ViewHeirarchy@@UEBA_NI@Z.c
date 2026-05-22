/*
 * XREFs of ?IsComponent@ViewHeirarchy@@UEBA_NI@Z @ 0x18006DD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ViewHeirarchy::IsComponent(ViewHeirarchy *this, int a2)
{
  char v2; // r8
  unsigned __int64 v3; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 *i; // rax
  __int64 *v13; // rcx
  int v15; // [rsp+10h] [rbp+10h]

  v2 = 0;
  v15 = a2;
  v3 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *((unsigned __int8 *)&v15 + v3++);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v3 < 4 );
  v8 = (__int64 *)*((_QWORD *)this + 9);
  v9 = v6 & *((_QWORD *)this + 14);
  v10 = *((_QWORD *)this + 11);
  v11 = 2 * v9;
  for ( i = *(__int64 **)(v10 + 16 * v9); ; i = (__int64 *)*i )
  {
    v13 = *(__int64 **)(v10 + 8 * v11) == v8 ? (__int64 *)*((_QWORD *)this + 9) : **(__int64 ***)(v10 + 8 * v11 + 8);
    if ( i == v13 )
      break;
    if ( a2 == *((_DWORD *)i + 4) )
      goto LABEL_12;
  }
  i = (__int64 *)*((_QWORD *)this + 9);
LABEL_12:
  if ( i != v8 )
    return *((_DWORD *)i + 8) != 0;
  return v2;
}
