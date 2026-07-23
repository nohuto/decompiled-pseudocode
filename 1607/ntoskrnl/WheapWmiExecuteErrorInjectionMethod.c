/*
 * XREFs of WheapWmiExecuteErrorInjectionMethod @ 0x140231174
 * Callers:
 *     WheapWmiExecuteMethod @ 0x140231640 (WheapWmiExecuteMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapWmiExecuteErrorInjectionMethod(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        int *a5)
{
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r8
  int InjectionCapabilities; // eax
  unsigned int v17; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1 - 1;
  if ( !v7 )
  {
    v17 = 0;
    InjectionCapabilities = PshedGetInjectionCapabilities(&v17);
    v8 = 8;
    if ( a2 >= 8 )
    {
      if ( InjectionCapabilities >= 0 )
      {
        *a3 = 0;
        v9 = 0;
        a3[1] = v17;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
LABEL_10:
    v9 = -1073741789;
    goto LABEL_14;
  }
  if ( v7 == 1 )
  {
    if ( a4 < 0x24 )
    {
      v9 = -1073741811;
      v8 = 0;
      goto LABEL_14;
    }
    v10 = *a3;
    v11 = *((_QWORD *)a3 + 1);
    v12 = *((_QWORD *)a3 + 3);
    v13 = *((_QWORD *)a3 + 4);
    v8 = 4;
    v14 = *((_QWORD *)a3 + 2);
    if ( a2 >= 4 )
    {
      v9 = PshedInjectError(v10, v11, v14, v12, v13);
      if ( v9 >= 0 )
      {
        *a3 = 0;
        goto LABEL_14;
      }
LABEL_13:
      v9 = -1073741823;
      *a3 = -1073741823;
      goto LABEL_14;
    }
    goto LABEL_10;
  }
  v8 = 0;
  v9 = -1073741161;
LABEL_14:
  *a5 = v8;
  return (unsigned int)v9;
}
