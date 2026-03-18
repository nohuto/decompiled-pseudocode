/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C001BA40
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0011FE8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z @ 0x1C001B764 (-AllocateElements@-$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0HEGLFAFB@@@QEAAPEAU_VIDSCH_CONTEXT_ID_PAIR@@I@Z @ 0x1C001B7D8 (-AllocateElements@-$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0HEGLFAFB@@@QEAAPEAU_V.c)
 *     Template_pxqPR2XR2 @ 0x1C001C008 (Template_pxqPR2XR2.c)
 */

__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4, int a5)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  _QWORD *v11; // rax
  _QWORD *v13; // rax
  _QWORD *Elements; // r14
  _QWORD *v15; // rdx
  unsigned int v16; // esi
  _QWORD *i; // rcx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // r9
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r9
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rbx
  _QWORD *v34; // rax
  PVOID v35; // [rsp+40h] [rbp-88h] BYREF
  char v36; // [rsp+48h] [rbp-80h] BYREF
  int v37; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  char v39; // [rsp+68h] [rbp-60h] BYREF
  int v40; // [rsp+78h] [rbp-50h]

  v5 = (_QWORD *)a1[131];
  v6 = a1 + 130;
  v7 = a4;
  if ( v5 == a1 + 130 || v5[2] != a3 )
  {
    v11 = operator new(0x68uLL, 0x68536956u, (POOL_TYPE)512);
    v5 = v11;
    if ( v11 )
    {
      v11[3] = 0LL;
      *((_DWORD *)v11 + 16) = 0;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
      return 3221225495LL;
    v5[2] = a3;
    v5[10] = v5 + 9;
    v5[9] = v5 + 9;
    v5[12] = v5 + 11;
    v5[11] = v5 + 11;
    v13 = (_QWORD *)v6[1];
    *v5 = v6;
    v5[1] = v13;
    if ( (_QWORD *)*v13 != v6 )
      __fastfail(3u);
    *v13 = v5;
    v6[1] = v5;
    if ( (_DWORD)v7 )
    {
      Elements = (_QWORD *)NonPagedPoolZeroedArray<_VIDSCH_CONTEXT_ID_PAIR,2,1953189969>::AllocateElements(
                             (_DWORD *)v5 + 6,
                             v7);
      if ( !Elements )
      {
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'((_VIDSCH_SYNC_POINT *)v5);
        return 3221225495LL;
      }
      v15 = a1 + 9;
      v16 = 0;
      for ( i = (_QWORD *)a1[9]; i != v15; i = (_QWORD *)*i )
      {
        v18 = i - 3;
        v19 = i[18];
        if ( v19 > i[16] )
        {
          if ( v16 > (int)v7 - 1 )
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v15);
            v34[3] = 281LL;
            v34[4] = 1792LL;
            v34[5] = v18[21];
            v34[6] = v18[19];
            v34[7] = v16;
            WdLogEvent5_WdCriticalError(v34);
            __debugbreak();
          }
          v20 = 2LL * v16++;
          Elements[v20 + 1] = v19;
          Elements[v20] = v18;
        }
      }
      if ( bTracingEnabled )
      {
        v35 = 0LL;
        v37 = 0;
        P = 0LL;
        v40 = 0;
        v21 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&v35, v7);
        v22 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&P, v7);
        v23 = v22;
        if ( v21 && v22 )
        {
          v24 = (_QWORD *)v22;
          v25 = v21 - v22;
          v26 = v7;
          do
          {
            v27 = *Elements;
            v28 = *(_QWORD *)(*Elements + 56LL);
            if ( !v28 || (*(_DWORD *)(v27 + 112) & 0x40) != 0 )
              v28 = *Elements;
            *(_QWORD *)((char *)v24 + v25) = v28;
            v29 = Elements[1];
            Elements += 2;
            *v24++ = v29;
            --v26;
          }
          while ( v26 );
          v30 = a1[1];
          if ( !v30 )
            LODWORD(v30) = (_DWORD)a1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_pxqPR2XR2(v23, v27, v28, v30, v5[2], v7, v21, v23);
        }
        if ( P != &v39 && P )
          ExFreePoolWithTag(P, 0);
        if ( v35 != &v36 && v35 )
          ExFreePoolWithTag(v35, 0);
      }
    }
  }
  if ( !a5 )
  {
    v31 = (_QWORD *)v5[10];
    v32 = a2 + 25;
    v33 = v5 + 9;
    a2[26] = v31;
    a2[25] = v33;
    if ( (_QWORD *)*v31 != v33 )
      __fastfail(3u);
LABEL_44:
    *v31 = v32;
    v33[1] = v32;
    return 0LL;
  }
  if ( a5 == 3 )
  {
    v31 = (_QWORD *)v5[12];
    v32 = a2 + 27;
    v33 = v5 + 11;
    a2[28] = v31;
    a2[27] = v33;
    if ( (_QWORD *)*v31 != v33 )
      __fastfail(3u);
    goto LABEL_44;
  }
  return 0LL;
}
