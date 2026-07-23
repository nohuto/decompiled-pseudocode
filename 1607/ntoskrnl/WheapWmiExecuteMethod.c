/*
 * XREFs of WheapWmiExecuteMethod @ 0x140231640
 * Callers:
 *     WheaWmiDispatch @ 0x14014B6A8 (WheaWmiDispatch.c)
 * Callees:
 *     WheapWmiExecuteErrorInjectionMethod @ 0x140231174 (WheapWmiExecuteErrorInjectionMethod.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x140231240 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheapWmiExecutePolicyManagementMethod @ 0x140231760 (WheapWmiExecutePolicyManagementMethod.c)
 */

__int64 __fastcall WheapWmiExecuteMethod(__int64 *a1, unsigned int a2, int *a3, int *a4)
{
  __int64 v4; // rax
  unsigned int *v7; // r8
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v20; // [rsp+48h] [rbp+10h] BYREF

  v4 = (unsigned int)a3[15];
  v20 = 0;
  v7 = (unsigned int *)((char *)a3 + v4);
  v10 = a2 - v4;
  v11 = *a1;
  v12 = *(_QWORD *)&WHEAErrorSourceMethods_GUID.Data1 - *a1;
  if ( !v12 )
    v12 = *(_QWORD *)WHEAErrorSourceMethods_GUID.Data4 - a1[1];
  if ( v12 )
  {
    v14 = *(_QWORD *)&WHEAErrorInjectionMethods_GUID.Data1 - v11;
    if ( *(_QWORD *)&WHEAErrorInjectionMethods_GUID.Data1 == v11 )
      v14 = *(_QWORD *)WHEAErrorInjectionMethods_GUID.Data4 - a1[1];
    if ( v14 )
    {
      v15 = *(_QWORD *)&WHEAPolicyManagementMethods_GUID.Data1 - v11;
      if ( *(_QWORD *)&WHEAPolicyManagementMethods_GUID.Data1 == v11 )
        v15 = *(_QWORD *)WHEAPolicyManagementMethods_GUID.Data4 - a1[1];
      if ( v15 )
      {
        v16 = -1073741808;
        goto LABEL_19;
      }
      v13 = WheapWmiExecutePolicyManagementMethod(a3[14], v10, (_DWORD)v7, a3[16], (__int64)&v20);
    }
    else
    {
      v13 = WheapWmiExecuteErrorInjectionMethod(a3[14], v10, v7, a3[16], &v20);
    }
  }
  else
  {
    v13 = WheapWmiExecuteErrorSourceMethod(a3[14], v10, (int *)v7, a3[16], (unsigned int *)&v20);
  }
  v16 = v13;
  v17 = v20;
  v18 = a3[15] + v20;
  if ( v16 != -1073741789 )
  {
    *a3 = v18;
    a3[16] = v17;
    goto LABEL_20;
  }
  if ( a2 < 0x38 )
  {
    v16 = -1073741789;
LABEL_19:
    v18 = 0;
    goto LABEL_20;
  }
  a3[12] = v18;
  v18 = 56;
  *a3 = 56;
  v16 = 0;
  a3[11] = 32;
LABEL_20:
  *a4 = v18;
  return v16;
}
