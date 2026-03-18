/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0012654
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0HEGLFAFB@@@QEAAPEAU_VIDSCH_CONTEXT_ID_PAIR@@I@Z @ 0x1C001282C (-AllocateElements@-$NonPagedPoolZeroedArray@U_VIDSCH_CONTEXT_ID_PAIR@@$01$0HEGLFAFB@@@QEAAPEAU_V.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0014708 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z @ 0x1C0021F68 (-AllocateElements@-$NonPagedPoolZeroedArray@PEBX$01$0GIFDGJFG@@@QEAAPEAPEBXI@Z.c)
 *     Template_pxqPR2XR2 @ 0x1C002230C (Template_pxqPR2XR2.c)
 */

__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned int a4, int a5)
{
  _VIDSCH_SYNC_POINT *v5; // rbx
  _VIDSCH_SYNC_POINT *v6; // rdi
  __int64 v7; // rbp
  _VIDSCH_SYNC_POINT *PoolWithTag; // rax
  _VIDSCH_SYNC_POINT **v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r9
  _QWORD *Elements; // r14
  _QWORD *v16; // rdx
  unsigned int v17; // esi
  _QWORD *i; // rcx
  _QWORD *v19; // rdi
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  _QWORD *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // r9
  __int64 v31; // r10
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r9
  PVOID v37; // [rsp+40h] [rbp-88h] BYREF
  char v38; // [rsp+48h] [rbp-80h] BYREF
  int v39; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h] BYREF
  char v41; // [rsp+68h] [rbp-60h] BYREF
  int v42; // [rsp+78h] [rbp-50h]

  v5 = (_VIDSCH_SYNC_POINT *)a1[147];
  v6 = (_VIDSCH_SYNC_POINT *)(a1 + 146);
  v7 = a4;
  if ( v5 != (_VIDSCH_SYNC_POINT *)(a1 + 146) && *((_QWORD *)v5 + 2) == a3 )
    goto LABEL_15;
  PoolWithTag = (_VIDSCH_SYNC_POINT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x68536956u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_DWORD *)PoolWithTag + 16) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    *((_QWORD *)v5 + 2) = a3;
    *((_QWORD *)v5 + 10) = (char *)v5 + 72;
    *((_QWORD *)v5 + 9) = (char *)v5 + 72;
    *((_QWORD *)v5 + 12) = (char *)v5 + 88;
    *((_QWORD *)v5 + 11) = (char *)v5 + 88;
    v12 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v6 + 1);
    *(_QWORD *)v5 = v6;
    *((_QWORD *)v5 + 1) = v12;
    if ( *v12 != v6 )
      __fastfail(3u);
    *v12 = v5;
    *((_QWORD *)v6 + 1) = v5;
    if ( !(_DWORD)v7 )
    {
LABEL_15:
      if ( a5 )
      {
        if ( a5 != 3 )
          return 0LL;
        v22 = (_QWORD *)*((_QWORD *)v5 + 12);
        v23 = a2 + 27;
        v24 = (_QWORD *)((char *)v5 + 88);
        a2[28] = v22;
        a2[27] = v24;
        if ( (_QWORD *)*v22 != v24 )
          __fastfail(3u);
      }
      else
      {
        v22 = (_QWORD *)*((_QWORD *)v5 + 10);
        v23 = a2 + 25;
        v24 = (_QWORD *)((char *)v5 + 72);
        a2[26] = v22;
        a2[25] = v24;
        if ( (_QWORD *)*v22 != v24 )
          __fastfail(3u);
      }
      *v22 = v23;
      v24[1] = v23;
      return 0LL;
    }
    Elements = (_QWORD *)NonPagedPoolZeroedArray<_VIDSCH_CONTEXT_ID_PAIR,2,1953189969>::AllocateElements(
                           (char *)v5 + 24,
                           (unsigned int)v7);
    if ( Elements )
    {
      v16 = a1 + 9;
      v17 = 0;
      for ( i = (_QWORD *)a1[9]; i != v16; i = (_QWORD *)*i )
      {
        v19 = i - 3;
        v20 = i[18];
        if ( v20 > i[16] )
        {
          if ( v17 > (int)v7 - 1 )
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v16, v20, v14);
            v26[3] = 281LL;
            v26[4] = 1792LL;
            v26[5] = v19[21];
            v26[6] = v19[19];
            v26[7] = v17;
            WdLogEvent5_WdCriticalError(v26);
            JUMPOUT(0x1C001B707LL);
          }
          v21 = 2LL * v17++;
          Elements[v21 + 1] = v20;
          Elements[v21] = v19;
        }
      }
      if ( bTracingEnabled )
      {
        v37 = 0LL;
        v39 = 0;
        P = 0LL;
        v42 = 0;
        v27 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&v37, (unsigned int)v7);
        v28 = NonPagedPoolZeroedArray<void const *,2,1750296918>::AllocateElements(&P, (unsigned int)v7);
        v29 = v28;
        if ( v27 && v28 )
        {
          v30 = (_QWORD *)v28;
          v31 = v27 - v28;
          v32 = v7;
          do
          {
            v33 = *Elements;
            v34 = *(_QWORD *)(*Elements + 56LL);
            if ( !v34 || (*(_DWORD *)(v33 + 112) & 0x40) != 0 )
              v34 = *Elements;
            *(_QWORD *)((char *)v30 + v31) = v34;
            v35 = Elements[1];
            Elements += 2;
            *v30++ = v35;
            --v32;
          }
          while ( v32 );
          v36 = a1[1];
          if ( !v36 )
            LODWORD(v36) = (_DWORD)a1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_pxqPR2XR2(v29, v33, v34, v36, *((_QWORD *)v5 + 2), v7, v27, v29);
        }
        if ( P != &v41 && P )
          ExFreePoolWithTag(P, 0);
        if ( v37 != &v38 && v37 )
          ExFreePoolWithTag(v37, 0);
      }
      goto LABEL_15;
    }
    _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v5, v13);
  }
  return 3221225495LL;
}
