/*
 * XREFs of DrvDbGetObjectList @ 0x14051971C
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1404437A8 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverInfFile @ 0x140445038 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDeviceId @ 0x1404C6A64 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverFile @ 0x14069CEB0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140444448 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404444DC (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectSubKeyList @ 0x140519894 (DrvDbGetObjectSubKeyList.c)
 */

__int64 __fastcall DrvDbGetObjectList(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        int a8)
{
  _DWORD *v8; // rdi
  int v9; // r14d
  int v10; // r15d
  int ObjectSubKeyList; // ebx
  __int64 v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  int v18; // eax
  __int64 v19; // r8
  int v20; // ecx
  unsigned int v21; // eax
  int v23; // eax
  void *v24[3]; // [rsp+40h] [rbp-18h] BYREF
  int v25; // [rsp+A0h] [rbp+48h] BYREF
  int v26; // [rsp+A8h] [rbp+50h]
  __int64 v27; // [rsp+B0h] [rbp+58h]
  __int64 v28; // [rsp+B8h] [rbp+60h]

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v8 = a7;
  v9 = a4;
  v10 = a3;
  v24[0] = 0LL;
  ObjectSubKeyList = 0;
  v25 = 0;
  *a7 = 0;
  v13 = 0LL;
  v14 = 0;
  if ( *(_QWORD *)(a1 + 40) )
  {
    v13 = *(_QWORD *)(a1 + 40);
    v23 = DrvDbAcquireDatabaseNodeBaseKey((__int64 **)a1, v13, a2, v24);
    ObjectSubKeyList = v23;
    if ( v23 >= 0 )
    {
      ObjectSubKeyList = DrvDbGetObjectSubKeyList(*(_QWORD *)a1, v24[0], v10, v9, a5, a6, (__int64)v8, a8);
    }
    else if ( v23 == -1073740697 )
    {
      ObjectSubKeyList = -1073741766;
    }
  }
  else
  {
    v15 = a5;
    v16 = (_QWORD *)(a1 + 16);
    v17 = *(_QWORD **)(a1 + 16);
    while ( v17 != v16 )
    {
      v13 = (__int64)v17;
      v18 = DrvDbAcquireDatabaseNodeBaseKey((__int64 **)a1, (__int64)v17, a2, v24);
      ObjectSubKeyList = v18;
      if ( v18 == -1073740697 )
      {
        ObjectSubKeyList = 0;
      }
      else
      {
        if ( v18 < 0 )
          break;
        ObjectSubKeyList = DrvDbGetObjectSubKeyList(
                             *(_QWORD *)a1,
                             v24[0],
                             v27,
                             v28,
                             v15 + 2LL * v14,
                             a6 - v14,
                             (__int64)&v25,
                             a8);
        DrvDbReleaseDatabaseNodeBaseKey(a1, (__int64)v17, v19, v24[0]);
        v20 = v25;
        v24[0] = 0LL;
        if ( v25 )
          v20 = --v25;
        if ( v15 && v20 + v14 < a6 )
          v14 += v20;
        *v8 += v20;
        if ( (int)(ObjectSubKeyList + 0x80000000) >= 0 && ObjectSubKeyList != -1073741789 )
          break;
      }
      v17 = (_QWORD *)*v17;
      v16 = (_QWORD *)(a1 + 16);
      a2 = v26;
    }
    v21 = ++*v8;
    if ( ObjectSubKeyList >= 0 )
    {
      if ( v15 && v21 <= a6 )
        *(_WORD *)(v15 + 2LL * (v21 - 1)) = 0;
      else
        ObjectSubKeyList = -1073741789;
    }
  }
  if ( v24[0] )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v13, a3, v24[0]);
  return (unsigned int)ObjectSubKeyList;
}
