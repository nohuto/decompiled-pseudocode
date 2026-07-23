/*
 * XREFs of DrvDbGetObjectList @ 0x1406E1A28
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1404B8C04 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverPackage @ 0x1404E5974 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverInfFile @ 0x1404E6E34 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverFile @ 0x1406E3BD0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DED30 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1404DF04C (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectSubKeyList @ 0x1406E1F1C (DrvDbGetObjectSubKeyList.c)
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
  int v15; // eax
  __int64 v16; // r15
  _QWORD *v17; // rax
  _QWORD *v18; // r14
  int v19; // eax
  __int64 v20; // r8
  int v21; // ecx
  unsigned int v22; // eax
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
    v15 = DrvDbAcquireDatabaseNodeBaseKey((__int64 **)a1, v13, a2, v24);
    ObjectSubKeyList = v15;
    if ( v15 >= 0 )
    {
      ObjectSubKeyList = DrvDbGetObjectSubKeyList(*(_QWORD *)a1, v24[0], v10, v9, a5, a6, (__int64)v8, a8);
    }
    else if ( v15 == -1073740697 )
    {
      ObjectSubKeyList = -1073741766;
    }
  }
  else
  {
    v16 = a5;
    v17 = (_QWORD *)(a1 + 16);
    v18 = *(_QWORD **)(a1 + 16);
    while ( v18 != v17 )
    {
      v13 = (__int64)v18;
      v19 = DrvDbAcquireDatabaseNodeBaseKey((__int64 **)a1, (__int64)v18, a2, v24);
      ObjectSubKeyList = v19;
      if ( v19 == -1073740697 )
      {
        ObjectSubKeyList = 0;
      }
      else
      {
        if ( v19 < 0 )
          break;
        ObjectSubKeyList = DrvDbGetObjectSubKeyList(
                             *(_QWORD *)a1,
                             v24[0],
                             v27,
                             v28,
                             v16 + 2LL * v14,
                             a6 - v14,
                             (__int64)&v25,
                             a8);
        DrvDbReleaseDatabaseNodeBaseKey(a1, (__int64)v18, v20, v24[0]);
        v21 = v25;
        v24[0] = 0LL;
        if ( v25 )
          v21 = --v25;
        if ( v16 && v21 + v14 < a6 )
          v14 += v21;
        *v8 += v21;
        if ( (int)(ObjectSubKeyList + 0x80000000) >= 0 && ObjectSubKeyList != -1073741789 )
          break;
      }
      v18 = (_QWORD *)*v18;
      v17 = (_QWORD *)(a1 + 16);
      a2 = v26;
    }
    v22 = ++*v8;
    if ( ObjectSubKeyList >= 0 )
    {
      if ( v16 && v22 <= a6 )
        *(_WORD *)(v16 + 2LL * (v22 - 1)) = 0;
      else
        ObjectSubKeyList = -1073741789;
    }
  }
  if ( v24[0] )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v13, a3, v24[0]);
  return (unsigned int)ObjectSubKeyList;
}
