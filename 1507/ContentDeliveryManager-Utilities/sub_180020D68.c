/*
 * XREFs of sub_180020D68 @ 0x180020D68
 * Callers:
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_180020E24 @ 0x180020E24 (sub_180020E24.c)
 */

__int64 __fastcall sub_180020D68(__int64 a1, const WCHAR *a2, __int64 a3)
{
  wchar_t **v4; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // r9d
  int v11; // eax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = &off_18003A110;
  while ( CompareStringOrdinal(a2, -1, *v4, -1, 1) != 2 )
  {
    v4 += 2;
    if ( v4 == (wchar_t **)&std::bad_alloc `RTTI Type Descriptor' )
      goto LABEL_6;
  }
  v7 = *((int *)v4 + 2);
  if ( (_DWORD)v7 == -1 )
  {
LABEL_6:
    v8 = -2147024809;
    v9 = 93;
    v10 = -2147024809;
    goto LABEL_9;
  }
  v11 = sub_180020E24(a1 + 24 * v7, a3);
  v8 = v11;
  if ( v11 >= 0 )
    return v8;
  v10 = v11;
  v9 = 94;
LABEL_9:
  sub_1800025D0(
    retaddr,
    v9,
    (__int64)"shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    v10);
  return v8;
}
