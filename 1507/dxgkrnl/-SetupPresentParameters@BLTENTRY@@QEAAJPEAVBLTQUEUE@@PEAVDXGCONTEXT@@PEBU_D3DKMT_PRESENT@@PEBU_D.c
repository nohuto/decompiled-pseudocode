/*
 * XREFs of ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015AE68
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0159EE4 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C0159A24 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A904 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3D.c)
 */

__int64 __fastcall BLTENTRY::SetupPresentParameters(
        BLTENTRY *this,
        struct BLTQUEUE *a2,
        struct DXGCONTEXT *a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        unsigned __int8 a7)
{
  D3DKMT_HANDLE hSource; // edi
  __int64 v11; // r15
  unsigned int v12; // ecx
  D3DKMT_HANDLE v13; // edi
  __int64 v14; // r8
  unsigned int v15; // edx
  struct DXGALLOCATION *v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rcx
  __int64 v24; // rdi
  const struct tagRECT *v25; // r15
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  __int64 v28; // rax
  _QWORD *v29; // rdi
  __int64 v30; // rbx
  PVOID v31; // [rsp+60h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-C0h] BYREF
  struct COREDEVICEACCESS *v33; // [rsp+70h] [rbp-B8h]
  __int128 *v34; // [rsp+78h] [rbp-B0h]
  unsigned int v35[20]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-58h] BYREF

  v33 = a6;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( (a4->Flags.Value & 4) != 0 )
    hSource = a4->hSource;
  else
    hSource = a4->hDestination;
  v11 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 192));
  v12 = (hSource >> 6) & 0xFFFFFF;
  v13 = hSource >> 30;
  if ( v12 < *(_DWORD *)(v11 + 232)
    && (v14 = *(_QWORD *)(v11 + 216), v15 = *(_DWORD *)(v14 + 16LL * v12 + 8), v13 == ((v15 >> 4) & 3))
    && (v15 & 0x1000) == 0
    && (v15 & 0xF) != 0
    && (*(_BYTE *)(v14 + 16LL * v12 + 8) & 0xF) == 5 )
  {
    v16 = *(struct DXGALLOCATION **)(v14 + 16LL * v12);
  }
  else
  {
    v16 = 0LL;
  }
  ExReleasePushLockSharedEx(v11 + 192, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 4) = v16;
  if ( !v16 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v18[3] = a3;
    v19 = a4->hSource;
LABEL_13:
    v18[4] = v19;
    v18[5] = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  if ( !a7 )
  {
    v21 = *(_QWORD *)(*((_QWORD *)v16 + 1) + 16LL);
    if ( *(_QWORD *)(v21 + 16) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v18[3] = *((_QWORD *)a3 + 2);
LABEL_18:
      v19 = *((_QWORD *)this + 4);
      goto LABEL_13;
    }
  }
  v22 = *(unsigned int *)(*((_QWORD *)v16 + 6) + 4LL);
  if ( (v22 & 4) == 0 && !a7 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v18[3] = a3;
    goto LABEL_18;
  }
  *((_QWORD *)this + 65) = 0LL;
  if ( a7 )
  {
    *((_DWORD *)this + 130) = 1;
  }
  else
  {
    memset(v35, 0, sizeof(v35));
    DxgkpGetDodPrimaryInfo(*((struct DXGDEVICE **)a3 + 2), v16, (struct _D3DKMT_KMDOD_ESCAPE *)v35);
    if ( !v35[8] )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v18[3] = 93LL;
      goto LABEL_14;
    }
    v24 = *((_QWORD *)a3 + 7);
    v25 = 0LL;
    if ( *(_DWORD *)v24 != -791674878 || (v23 = *(void **)(v24 + 16)) == 0LL || !*(_QWORD *)(v24 + 24) )
    {
      v28 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v28 + 24) = 107LL;
      WdLogEvent5_WdError(v28);
      return 3221225485LL;
    }
    v26 = ObReferenceObjectByHandle(v23, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    *((_QWORD *)this + 5) = Object;
    if ( v26 < 0 )
      return 3221225485LL;
    v27 = ObReferenceObjectByHandle(*(HANDLE *)(v24 + 24), 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v31, 0LL);
    *((_QWORD *)this + 6) = v31;
    if ( v27 < 0 )
      return 3221225485LL;
    if ( *(_QWORD *)(v24 + 32) == v24 + 32 && *(int *)(v24 + 40) < 0 )
    {
      v36 = *(_OWORD *)(v24 + 44);
      v25 = (const struct tagRECT *)&v36;
      v34 = &v36;
    }
    result = PRESENTDODARG::SetPresentDodArg(
               (BLTENTRY *)((char *)this + 72),
               a3,
               *((struct DXGALLOCATION **)this + 4),
               v35[8],
               v35[10],
               v25,
               a4,
               a5,
               v33);
    if ( (int)result < 0 )
    {
      *((_QWORD *)this + 4) = 0LL;
      return result;
    }
  }
  *((_DWORD *)this + 16) = a4->Flags.0;
  *((_DWORD *)this + 14) = a4->FlipInterval;
  *((_DWORD *)this + 15) = a4->PresentCount;
  v29 = (_QWORD *)((char *)this + 528);
  memset((char *)this + 528, 0, 0x20uLL);
  *((LARGE_INTEGER *)this + 67) = KeQueryPerformanceCounter(0LL);
  v30 = MEMORY[0xFFFFF78000000320];
  *v29 = v30 * KeQueryTimeIncrement();
  return 0LL;
}
