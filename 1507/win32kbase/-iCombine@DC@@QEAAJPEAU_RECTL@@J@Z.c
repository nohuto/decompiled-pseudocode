/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70
 * Callers:
 *     GreIntersectClipRect @ 0x1C00279E0 (GreIntersectClipRect.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C08 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C10 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     ?bWrapped@ERECTL@@QEAAHXZ @ 0x1C000C19C (-bWrapped@ERECTL@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C000C1DC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A980 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C003DA74 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C004C060 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  struct REGION *v4; // r12
  unsigned int v8; // r14d
  int v9; // r15d
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 Object; // rax
  _QWORD *v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  struct REGION *v18; // rcx
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rbx
  int v23; // r12d
  _DWORD *v24; // rdi
  int v25; // r15d
  unsigned __int64 v26; // r14
  __int64 v27; // rdx
  DYNAMICMODECHANGESHARELOCK *v28; // rcx
  __int64 v29; // r8
  struct EPOINTL *v30; // rax
  LONG v31; // r15d
  LONG v32; // ebx
  __int64 v33; // rax
  RGNOBJ *v34; // rcx
  __int64 v35; // [rsp+20h] [rbp-60h] BYREF
  int v36; // [rsp+28h] [rbp-58h]
  __int64 v37; // [rsp+30h] [rbp-50h] BYREF
  int v38; // [rsp+38h] [rbp-48h]
  __int64 v39; // [rsp+40h] [rbp-40h] BYREF
  int v40; // [rsp+48h] [rbp-38h]
  struct _RECTL v41; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v42[2]; // [rsp+60h] [rbp-20h] BYREF
  __int32 v43; // [rsp+B0h] [rbp+30h] BYREF
  struct REGION *v44; // [rsp+B8h] [rbp+38h] BYREF

  v4 = (struct REGION *)*((_QWORD *)this + 28);
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != -134217728
    || (a2->bottom & 0xF8000000) != 0 && (a2->bottom & 0xF8000000) != -134217728
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != -134217728
    || (a2->top & 0xF8000000) != 0 && (a2->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v8 = 216;
  v36 = 0;
  if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
  {
    v9 = 1;
    v8 = 376;
  }
  else
  {
    v9 = 0;
  }
  if ( dword_1C0100A00 >= v8
    && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0
    && (v10 = Win32AllocateFromPagedLookasideListImpl_0()) != 0 )
  {
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    if ( v9 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v10 - 160), 0LL);
    LOWORD(v43) = *(_WORD *)(v10 + 12);
    HIWORD(v43) = *(_WORD *)(v10 + 14) | 0x8000;
    _InterlockedExchange((volatile __int32 *)(v10 + 12), v43);
  }
  else
  {
    v10 = PALLOCMEM2(v8);
    if ( !v10 )
    {
      EngSetLastError(8u);
      return 0;
    }
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    if ( v9 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v10 - 160), 0LL);
  }
  *(_DWORD *)(v10 + 80) = 120;
  *(_QWORD *)(v10 + 84) = 1LL;
  *(_QWORD *)(v10 + 92) = 0LL;
  *(_DWORD *)(v10 + 100) = 0;
  *(_DWORD *)(v10 + 104) = 0;
  *(_DWORD *)(v10 + 108) = 0x80000000;
  *(_QWORD *)(v10 + 112) = 0x7FFFFFFFLL;
  v35 = v10;
  *(_QWORD *)(v10 + 40) = v10 + 120;
  *(_QWORD *)(v10 + 24) = 216LL;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_QWORD *)(v10 + 56) = v10 + 48;
  *(_QWORD *)(v10 + 48) = v10 + 48;
  RGNOBJ::vSet((RGNOBJ *)&v35, a2);
  v11 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v11 + 15) |= 4u;
  if ( v4 )
  {
    v40 = 0;
    Object = AllocateObject(0xD8uLL);
    v39 = Object;
    v14 = (_QWORD *)Object;
    if ( Object )
    {
      *(_DWORD *)(Object + 80) = 120;
      *(_QWORD *)(Object + 84) = 1LL;
      *(_QWORD *)(Object + 92) = 0LL;
      *(_DWORD *)(Object + 100) = 0;
      *(_DWORD *)(Object + 104) = 0;
      *(_DWORD *)(Object + 108) = 0x80000000;
      *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
      v44 = v4;
      v15 = Object + 120;
      v16 = (_QWORD *)(Object + 48);
      v14[5] = v15;
      v14[3] = 216LL;
      v14[4] = 0LL;
      v16[1] = v16;
      *v16 = v16;
      v12 = RGNOBJ::iCombine((RGNOBJ *)&v39, (struct RGNOBJ *)&v44, (struct RGNOBJ *)&v35, a3);
      if ( v12 )
      {
        v17 = v39;
        v18 = v44;
        ++*(_DWORD *)(v39 + 32);
        *((_QWORD *)this + 28) = v17;
        v19 = (*((_DWORD *)v18 + 8))-- == 1;
        if ( v19 && v18 != prgnDefault )
          FreeObject((__int64)v18);
        v10 = v35;
      }
      else
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
        v10 = v35;
      }
    }
    else
    {
      v12 = 0;
    }
    if ( v10 && (struct REGION *)v10 != prgnDefault )
    {
      if ( (*(_WORD *)(v10 + 14) & 0x8000) != 0 )
      {
        if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
          Win32FreeToPagedLookasideListImpl_0();
      }
      else
      {
        Win32FreePool();
      }
    }
    v35 = 0LL;
    if ( v40 != 1 )
      goto LABEL_30;
    v34 = (RGNOBJ *)&v39;
    goto LABEL_58;
  }
  if ( a3 != 1 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v42);
    if ( v37 )
    {
      if ( !v42[0] )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
        v12 = 0;
        goto LABEL_41;
      }
      v22 = *((_QWORD *)this + 66);
      v23 = 0;
      v24 = (_DWORD *)*((_QWORD *)this + 6);
      v25 = 0;
      v26 = HIDWORD(v22);
      if ( *((_QWORD *)this + 64) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v43, v20, v21);
        if ( (v24[14] & 0x20000) != 0 )
        {
          v28 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
          if ( (int)v28 < 0 )
          {
            v25 = v24[652];
            LODWORD(v22) = v25 + v22;
            v23 = v24[653];
            LODWORD(v26) = v23 + v26;
          }
        }
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v28, v27, v29);
      }
      v30 = DC::eptlOrigin(this);
      v31 = v25 - *(_DWORD *)v30;
      v32 = v22 - *(_DWORD *)v30;
      LODWORD(v30) = *((_DWORD *)v30 + 1);
      v41.top = v23 - (_DWORD)v30;
      v41.bottom = v26 - (_DWORD)v30;
      v41.left = v31;
      v41.right = v32;
      if ( !ERECTL::bEmpty((ERECTL *)&v41) && ERECTL::bWrapped((ERECTL *)&v41) )
      {
        v12 = 0;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)v42, &v41);
        v12 = RGNOBJ::iCombine((RGNOBJ *)&v37, (struct RGNOBJ *)v42, (struct RGNOBJ *)&v35, a3);
        if ( v12 )
        {
          v33 = v37;
          ++*(_DWORD *)(v37 + 32);
          *((_QWORD *)this + 28) = v33;
LABEL_41:
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v42);
          if ( v38 != 1 )
            goto LABEL_30;
          v34 = (RGNOBJ *)&v37;
LABEL_58:
          RGNOBJ::vDeleteRGNOBJ(v34);
LABEL_30:
          if ( v36 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
          return v12;
        }
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
      goto LABEL_41;
    }
    v12 = 0;
    goto LABEL_41;
  }
  ++*(_DWORD *)(v10 + 32);
  v12 = 2;
  *((_QWORD *)this + 28) = v10;
  return v12;
}
