/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002C950
 * Callers:
 *     GreIntersectClipRect @ 0x1C0014D20 (GreIntersectClipRect.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C40 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002B590 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002D734 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bWrapped@ERECTL@@QEAAHXZ @ 0x1C002DC18 (-bWrapped@ERECTL@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C002DC58 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00458F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0045924 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  struct REGION *v4; // r12
  unsigned int v8; // r14d
  int v9; // r15d
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 Object; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int16 *v17; // rax
  struct REGION *v18; // rcx
  bool v19; // zf
  unsigned __int64 v20; // rbx
  int v21; // r12d
  _DWORD *v22; // rdi
  int v23; // r15d
  unsigned __int64 v24; // r14
  DYNAMICMODECHANGESHARELOCK *v25; // rcx
  struct EPOINTL *v26; // rax
  LONG v27; // r15d
  LONG v28; // ebx
  __int16 *v29; // rax
  __int16 **v30; // rcx
  struct REGION *v31; // [rsp+20h] [rbp-60h] BYREF
  int v32; // [rsp+28h] [rbp-58h]
  __int16 *v33; // [rsp+30h] [rbp-50h] BYREF
  int v34; // [rsp+38h] [rbp-48h]
  __int16 *v35; // [rsp+40h] [rbp-40h] BYREF
  int v36; // [rsp+48h] [rbp-38h]
  struct _RECTL v37; // [rsp+50h] [rbp-30h] BYREF
  __int16 *v38[2]; // [rsp+60h] [rbp-20h] BYREF
  __int32 v39; // [rsp+B0h] [rbp+30h] BYREF
  struct REGION *v40; // [rsp+B8h] [rbp+38h] BYREF

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
  v32 = 0;
  if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 4 )
  {
    v9 = 1;
    v8 = 376;
  }
  else
  {
    v9 = 0;
  }
  if ( dword_1C0103610 >= v8
    && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0
    && (v10 = Win32AllocateFromPagedLookasideListImpl_0()) != 0 )
  {
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    if ( v9 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v10 - 160), 0LL);
    LOWORD(v39) = *(_WORD *)(v10 + 12);
    HIWORD(v39) = *(_WORD *)(v10 + 14) | 0x8000;
    _InterlockedExchange((volatile __int32 *)(v10 + 12), v39);
  }
  else
  {
    v10 = (__int64)PALLOCMEM2(v8, 875587655LL, 0);
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
  v31 = (struct REGION *)v10;
  *(_QWORD *)(v10 + 40) = v10 + 120;
  *(_QWORD *)(v10 + 24) = 216LL;
  *(_DWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 56) = v10 + 48;
  *(_QWORD *)(v10 + 48) = v10 + 48;
  RGNOBJ::vSet((RGNOBJ *)&v31, a2);
  v11 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v11 + 15) |= 4u;
  if ( v4 )
  {
    v36 = 0;
    Object = AllocateObject(0xD8uLL, 4u, 0);
    v35 = (__int16 *)Object;
    v14 = Object;
    if ( Object )
    {
      *(_DWORD *)(Object + 80) = 120;
      *(_QWORD *)(Object + 84) = 1LL;
      *(_QWORD *)(Object + 92) = 0LL;
      *(_DWORD *)(Object + 100) = 0;
      *(_DWORD *)(Object + 104) = 0;
      *(_DWORD *)(Object + 108) = 0x80000000;
      *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
      v40 = v4;
      v15 = Object + 120;
      v16 = (_QWORD *)(Object + 48);
      *(_QWORD *)(v14 + 40) = v15;
      *(_QWORD *)(v14 + 24) = 216LL;
      *(_DWORD *)(v14 + 32) = 0;
      v16[1] = v16;
      *v16 = v16;
      v12 = RGNOBJ::iCombine((RGNOBJ *)&v35, (struct RGNOBJ *)&v40, (struct RGNOBJ *)&v31, a3);
      if ( v12 )
      {
        v17 = v35;
        v18 = v40;
        ++*((_DWORD *)v35 + 8);
        *((_QWORD *)this + 28) = v17;
        v19 = (*((_DWORD *)v18 + 8))-- == 1;
        if ( v19 && v18 != prgnDefault )
          FreeObject((__int64)v18);
      }
      else
      {
        RGNOBJ::vDeleteRGNOBJ(&v35);
      }
    }
    else
    {
      v12 = 0;
    }
    if ( v31 && v31 != prgnDefault )
      FreeObject((__int64)v31);
    v31 = 0LL;
    if ( v36 != 1 )
      goto LABEL_27;
    v30 = &v35;
    goto LABEL_53;
  }
  if ( a3 != 1 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v33);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v38);
    if ( v33 )
    {
      if ( !v38[0] )
      {
        RGNOBJ::vDeleteRGNOBJ(&v33);
        v12 = 0;
        goto LABEL_38;
      }
      v20 = *((_QWORD *)this + 66);
      v21 = 0;
      v22 = (_DWORD *)*((_QWORD *)this + 6);
      v23 = 0;
      v24 = HIDWORD(v20);
      if ( *((_QWORD *)this + 64) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v39);
        if ( (v22[14] & 0x20000) != 0 )
        {
          v25 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
          if ( (int)v25 < 0 )
          {
            v23 = v22[652];
            LODWORD(v20) = v23 + v20;
            v21 = v22[653];
            LODWORD(v24) = v21 + v24;
          }
        }
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v25);
      }
      v26 = DC::eptlOrigin(this);
      v27 = v23 - *(_DWORD *)v26;
      v28 = v20 - *(_DWORD *)v26;
      LODWORD(v26) = *((_DWORD *)v26 + 1);
      v37.top = v21 - (_DWORD)v26;
      v37.bottom = v24 - (_DWORD)v26;
      v37.left = v27;
      v37.right = v28;
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v37) && (unsigned int)ERECTL::bWrapped((ERECTL *)&v37) )
      {
        v12 = 0;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)v38, &v37);
        v12 = RGNOBJ::iCombine((RGNOBJ *)&v33, (struct RGNOBJ *)v38, (struct RGNOBJ *)&v31, a3);
        if ( v12 )
        {
          v29 = v33;
          ++*((_DWORD *)v33 + 8);
          *((_QWORD *)this + 28) = v29;
LABEL_38:
          RGNOBJ::vDeleteRGNOBJ((__int16 **)&v31);
          RGNMEMOBJTMP::~RGNMEMOBJTMP(v38);
          if ( v34 != 1 )
            goto LABEL_27;
          v30 = &v33;
LABEL_53:
          RGNOBJ::vDeleteRGNOBJ(v30);
LABEL_27:
          if ( v32 == 1 )
            RGNOBJ::vDeleteRGNOBJ((__int16 **)&v31);
          return v12;
        }
      }
      RGNOBJ::vDeleteRGNOBJ(&v33);
      goto LABEL_38;
    }
    v12 = 0;
    goto LABEL_38;
  }
  ++*(_DWORD *)(v10 + 32);
  *((_QWORD *)this + 28) = v10;
  return 2;
}
