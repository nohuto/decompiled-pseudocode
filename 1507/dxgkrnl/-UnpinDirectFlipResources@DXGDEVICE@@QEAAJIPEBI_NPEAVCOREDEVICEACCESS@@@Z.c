/*
 * XREFs of ?UnpinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C0137338
 * Callers:
 *     DxgkUnpinDirectFlipResources @ 0x1C0139190 (DxgkUnpinDirectFlipResources.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C000E60C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0017BF4 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7DBC (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0137110 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const unsigned int *a3,
        char a4,
        struct COREDEVICEACCESS *a5)
{
  struct COREDEVICEACCESS *v5; // rdi
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbx
  const unsigned int *v12; // rax
  __int64 v13; // r13
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rcx
  struct DXGRESOURCE *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGALLOCATION **v24; // r12
  struct DXGALLOCATION *v25; // rdi
  __int64 v26; // rcx
  __int64 i; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // ecx
  __int64 v35; // rdx
  _QWORD *v36; // rax
  struct DXGALLOCATION *v37; // rdx
  unsigned int v38; // eax
  int v41; // [rsp+34h] [rbp-474h]
  const unsigned int *v43; // [rsp+40h] [rbp-468h]
  struct _EX_RUNDOWN_REF *v44; // [rsp+48h] [rbp-460h] BYREF
  struct DXGALLOCATION **v45; // [rsp+50h] [rbp-458h]
  struct COREDEVICEACCESS *v46; // [rsp+58h] [rbp-450h]
  struct DXGALLOCATION *v47[32]; // [rsp+60h] [rbp-448h] BYREF
  struct DXGALLOCATION *v48[96]; // [rsp+160h] [rbp-348h] BYREF

  v5 = a5;
  v46 = a5;
  `vector constructor iterator'(
    (char *)v47,
    8LL,
    31,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  v9 = 0LL;
  v41 = 1;
  v10 = 0LL;
  v11 = 0LL;
  if ( !a2 )
    goto LABEL_29;
  v45 = v47;
  v12 = a3;
  v43 = a3;
  while ( 2 )
  {
    v13 = *((_QWORD *)this + 5);
    v14 = *v12;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 192));
    v15 = (v14 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *(_DWORD *)(v13 + 232)
      && (v16 = *(_QWORD *)(v13 + 216),
          v17 = *(_DWORD *)(v16 + 16LL * (unsigned int)v15 + 8),
          ((v14 >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x30))
      && (v17 & 0x1000) == 0
      && (v17 & 0xF) != 0
      && (v18 = 2 * v15, (*(_BYTE *)(v16 + 8 * v18 + 8) & 0xF) == 4) )
    {
      v19 = *(struct DXGRESOURCE **)(v16 + 8 * v18);
    }
    else
    {
      v19 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v44, v19);
    ExReleasePushLockSharedEx(v13 + 192, 0LL);
    KeLeaveCriticalRegion();
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v47[v11], &v44);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v44);
    v24 = v45;
    v25 = *v45;
    if ( *v45 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)v25 + 1) + 16LL);
      v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( *(_QWORD *)(v20 + 16) != v26 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v36[3] = this;
        v37 = v47[v11];
        v31 = -1073741811;
        v36[5] = -1073741811LL;
        v36[4] = v37;
        WdLogEvent5_WdError(v36);
        goto LABEL_42;
      }
      v21 = 0LL;
      if ( (_DWORD)v11 )
      {
        while ( v47[v21] != v25 )
        {
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= (unsigned int)v11 )
            goto LABEL_15;
        }
        break;
      }
LABEL_15:
      for ( i = *((_QWORD *)v25 + 3); i; i = *(_QWORD *)(i + 64) )
      {
        v21 = *(unsigned int *)(*(_QWORD *)(i + 48) + 4LL);
        if ( (v21 & 0x2000) == 0 )
          goto LABEL_35;
        if ( v41 )
        {
          v41 = 0;
          v10 = ((unsigned int)v21 >> 6) & 0xF;
          if ( a4
            && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 2338) + 1976LL), this, v10) )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v22, v23);
            v31 = -1073741790;
            v30[3] = -1073741790LL;
            goto LABEL_37;
          }
        }
        else
        {
          v32 = ((unsigned int)v21 >> 6) & 0xF;
          if ( (_DWORD)v10 != (_DWORD)v32 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v20, v22, v23);
            v35 = a3[v11];
            v31 = -1073741811;
            v30[3] = v35;
            v30[4] = (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) >> 6) & 0xF;
            v30[5] = (unsigned int)v10;
            v30[6] = -1073741811LL;
            goto LABEL_37;
          }
        }
        v33 = (*(_DWORD *)(*(_QWORD *)(i + 48) + 4LL) >> 6) & 0xF;
        v20 = ((*(_DWORD *)(i + 72) >> 1) & 0x7F) + 96 * v33;
        if ( *((_QWORD *)this + v20 + 602) == i )
        {
          if ( (unsigned int)v9 >= 0x60 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v20, v22, v23);
            v30[3] = 96LL;
            goto LABEL_36;
          }
          v48[v9] = (struct DXGALLOCATION *)i;
          v9 = (unsigned int)(v9 + 1);
        }
      }
      v12 = v43 + 1;
      v45 = v24 + 1;
      v11 = (unsigned int)(v11 + 1);
      ++v43;
      if ( (unsigned int)v11 < a2 )
        continue;
      v5 = v46;
LABEL_29:
      v34 = *((_DWORD *)this + v10 + 4276);
      if ( v34 && (_DWORD)v9 )
      {
        if ( (_DWORD)v9 == v34 )
          v38 = DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)this, (unsigned int)v10, 0LL, v5);
        else
          v38 = DXGDEVICE::UnpinDirectFlipAllocation(this, v10, v9, v48, v5);
        v31 = v38;
      }
      else
      {
        v31 = 0;
      }
      goto LABEL_42;
    }
    break;
  }
LABEL_35:
  v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
  v30[3] = a3[v11];
LABEL_36:
  v31 = -1073741811;
  v30[4] = -1073741811LL;
LABEL_37:
  WdLogEvent5_WdWarning(v30);
LABEL_42:
  `vector destructor iterator'(
    (char *)v47,
    8LL,
    31,
    (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
  return v31;
}
