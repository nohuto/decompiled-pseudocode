/*
 * XREFs of DeregisterIdleDomain @ 0x1C001F464
 * Callers:
 *     DeregisterKernelIdleDomains @ 0x1C0015008 (DeregisterKernelIdleDomains.c)
 * Callees:
 *     <none>
 */

bool __fastcall DeregisterIdleDomain(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r8
  _QWORD *v3; // rbx
  char v6; // dl
  unsigned int *v7; // r9
  unsigned __int64 v8; // r11
  _QWORD *v9; // r8
  _QWORD *i; // rax
  unsigned int *v11; // rcx
  bool v12; // di
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  void **v16; // rax
  bool result; // al

  v2 = *(unsigned int **)(a1 + 672);
  v3 = (_QWORD *)a2[1];
  v6 = 1;
  v7 = v2 + 2;
  v8 = (unsigned __int64)&v2[8 * *v2 + 2];
  v9 = v3 + 2;
  for ( i = (_QWORD *)v3[2]; i != v9; i = (_QWORD *)*i )
  {
    v11 = (unsigned int *)(i - 2);
    if ( i - 2 != a2 && v11 >= v7 && (unsigned __int64)v11 < v8 )
      v6 = 0;
  }
  v12 = 0;
  if ( v6 )
  {
    v12 = *((_DWORD *)v3 + 8) == *((_DWORD *)v3 + 11);
    KeRemoveProcessorAffinityEx(v3 + 6, *(unsigned int *)(a1 + 56), v9, v7);
    --*((_DWORD *)v3 + 8);
  }
  v13 = a2[2];
  v14 = (_QWORD *)a2[3];
  if ( *(_QWORD **)(v13 + 8) != a2 + 2 || (_QWORD *)*v14 != a2 + 2 )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  if ( v14 == (_QWORD *)v13 )
  {
    v15 = (_QWORD *)*v3;
    v16 = (void **)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || *v16 != v3 )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = v16;
    ExFreePoolWithTag(v3, 0);
  }
  result = v12;
  a2[1] = 0LL;
  return result;
}
