/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C00017DC
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00013B0 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0011ED8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z @ 0x1C0025DC8 (-AllocateElements@-$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z.c)
 *     Template_pxqPR2XR2 @ 0x1C0026180 (Template_pxqPR2XR2.c)
 */

__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // rsi
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  PVOID v14; // rax
  _QWORD *v15; // r14
  unsigned int v16; // ebp
  _QWORD *i; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rsi
  unsigned __int64 v20; // r8
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // r9
  __int64 v33; // r10
  unsigned __int64 v34; // r11
  __int64 v35; // rax
  __int64 v36; // r9
  PVOID v37; // [rsp+40h] [rbp-88h] BYREF
  char v38; // [rsp+48h] [rbp-80h] BYREF
  int v39; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  char v41; // [rsp+68h] [rbp-60h] BYREF
  int v42; // [rsp+78h] [rbp-50h]

  v5 = a4;
  if ( !a4 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v25[7] = a5;
    v25[3] = 281LL;
    v25[4] = 3328LL;
    v25[5] = a1;
    v25[6] = a3;
    WdLogEvent5_WdCriticalError(v25);
    JUMPOUT(0x1C0015A33LL);
  }
  v9 = (_QWORD *)a1[146];
  v10 = a1 + 145;
  if ( v9 != a1 + 145 && v9[2] == a3 )
  {
LABEL_20:
    if ( a5 )
    {
      if ( a5 != 3 )
        return 0LL;
      v21 = (_QWORD *)v9[12];
      v22 = (_QWORD *)(a2 + 232);
      v23 = v9 + 11;
      if ( (_QWORD *)*v21 != v23 )
        __fastfail(3u);
    }
    else
    {
      v21 = (_QWORD *)v9[10];
      v22 = (_QWORD *)(a2 + 216);
      v23 = v9 + 9;
      if ( (_QWORD *)*v21 != v23 )
        __fastfail(3u);
    }
    *v22 = v23;
    v22[1] = v21;
    *v21 = v22;
    v23[1] = v22;
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x68536956u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 0LL;
    *((_DWORD *)PoolWithTag + 16) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v9[2] = a3;
    v9[10] = v9 + 9;
    v9[9] = v9 + 9;
    v9[12] = v9 + 11;
    v9[11] = v9 + 11;
    v13 = (_QWORD *)v10[1];
    if ( (_QWORD *)*v13 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v13;
    *v13 = v9;
    v10[1] = v9;
    if ( (unsigned int)v5 > 2 )
    {
      v12 = 0xFFFFFFFFFFFFFFFFuLL % v5;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x10 )
      {
LABEL_31:
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'((_VIDSCH_SYNC_POINT *)v9, v12);
        return 3221225495LL;
      }
      v14 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v5, 0x746B5051u);
    }
    else
    {
      v14 = v9 + 4;
    }
    v9[3] = v14;
    *((_DWORD *)v9 + 16) = v5;
    if ( v14 )
      memset(v14, 0, 16 * v5);
    v15 = (_QWORD *)v9[3];
    if ( v15 )
    {
      v16 = 0;
      for ( i = (_QWORD *)a1[8]; i != a1 + 8; i = (_QWORD *)*i )
      {
        v19 = i - 3;
        v20 = i[18];
        if ( v20 > i[16] )
        {
          if ( v16 > (int)v5 - 1 )
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
            v26[3] = 281LL;
            v26[4] = 3328LL;
            v26[5] = v19[21];
            v26[6] = v19[19];
            v26[7] = v16;
            WdLogEvent5_WdCriticalError(v26);
            JUMPOUT(0x1C0015ABDLL);
          }
          v18 = 2LL * v16++;
          v15[v18 + 1] = v20;
          v15[v18] = v19;
        }
      }
      if ( bTracingEnabled )
      {
        v37 = 0LL;
        v39 = 0;
        P = 0LL;
        v42 = 0;
        v27 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&v37, (unsigned int)v5);
        v28 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&P, (unsigned int)v5);
        v31 = v28;
        if ( v27 && v28 )
        {
          if ( (_DWORD)v5 )
          {
            v32 = (_QWORD *)v28;
            v33 = v27 - v28;
            v34 = v5;
            do
            {
              v29 = *v15;
              v30 = *(_QWORD *)(*v15 + 56LL);
              if ( !v30 || (*(_DWORD *)(v29 + 112) & 0x40) != 0 )
                v30 = *v15;
              *(_QWORD *)((char *)v32 + v33) = v30;
              v35 = v15[1];
              v15 += 2;
              *v32++ = v35;
              --v34;
            }
            while ( v34 );
          }
          v36 = a1[1];
          if ( !v36 )
            LODWORD(v36) = (_DWORD)a1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_pxqPR2XR2(v31, v29, v30, v36, v9[2], v5, v27, v31);
        }
        if ( P != &v41 && P )
          ExFreePoolWithTag(P, 0);
        if ( v37 != &v38 && v37 )
          ExFreePoolWithTag(v37, 0);
      }
      goto LABEL_20;
    }
    goto LABEL_31;
  }
  return 3221225495LL;
}
