/*
 * XREFs of ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004AD74
 * Callers:
 *     GreExtSelectClipRgnInternal @ 0x1C0290370 (GreExtSelectClipRgnInternal.c)
 *     NtGdiSelectClipPath @ 0x1C02A6530 (NtGdiSelectClipPath.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iSelect(DC *this, struct REGION *a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v8; // rdx
  _DWORD *v9; // rbx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  struct EPOINTL *v11; // rax
  int v12; // r9d
  int v13; // edx
  int v14; // r10d
  int v15; // r8d
  RGNOBJ *v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-50h] BYREF
  int v18; // [rsp+28h] [rbp-48h]
  struct REGION *v19; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v20[8]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _RECTL v22; // [rsp+50h] [rbp-20h] BYREF

  v3 = *((_QWORD *)this + 28);
  v4 = 0;
  if ( a3 != 5 && (a3 != 1 || !a2 || v3) )
  {
    v19 = a2;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
    if ( !v17 )
      goto LABEL_11;
    if ( v3 )
    {
      *(_QWORD *)&v22.left = v3;
      v4 = RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v19, a3);
      if ( !v4 )
      {
LABEL_39:
        v16 = (RGNOBJ *)&v17;
LABEL_42:
        RGNOBJ::vDeleteRGNOBJ(v16);
        goto LABEL_11;
      }
      ++*(_DWORD *)(v17 + 32);
      *((_QWORD *)this + 28) = v17;
      DC::vReleaseRao(this);
      if ( !--*(_DWORD *)(*(_QWORD *)&v22.left + 32LL) )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
    }
    else
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
      if ( v21[0] )
      {
        v8 = *((_QWORD *)this + 66);
        v9 = (_DWORD *)*((_QWORD *)this + 6);
        *(_QWORD *)&v22.left = 0LL;
        *(_QWORD *)&v22.right = v8;
        if ( *((_QWORD *)this + 64) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20);
          if ( (v9[14] & 0x20000) != 0 )
          {
            v10 = (DYNAMICMODECHANGESHARELOCK *)*(unsigned int *)(*((_QWORD *)this + 64) + 112LL);
            if ( (int)v10 < 0 )
            {
              v22.left += v9[652];
              v22.right += v9[652];
              v22.top += v9[653];
              v22.bottom += v9[653];
            }
          }
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
        }
        v11 = DC::eptlOrigin(this);
        v22.left = v12 - *(_DWORD *)v11;
        v22.right = v13 - *(_DWORD *)v11;
        v22.top = v14 - *((_DWORD *)v11 + 1);
        v22.bottom = v15 - *((_DWORD *)v11 + 1);
        RGNOBJ::vSet((RGNOBJ *)v21, &v22);
        v4 = RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)v21, (struct RGNOBJ *)&v19, a3);
        if ( v4 )
        {
          ++*(_DWORD *)(v17 + 32);
          *((_QWORD *)this + 28) = v17;
          DC::vReleaseRao(this);
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
    }
    if ( v4 )
      goto LABEL_11;
    goto LABEL_39;
  }
  if ( !a2 )
  {
    v4 = 2;
    if ( !v3 )
      return v4;
    v19 = (struct REGION *)*((_QWORD *)this + 28);
    --*(_DWORD *)(v3 + 32);
    if ( !*((_DWORD *)v19 + 8) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
    *((_QWORD *)this + 28) = 0LL;
    goto LABEL_21;
  }
  v19 = a2;
  *(_QWORD *)&v22.left = v3;
  if ( v3 && *(_DWORD *)(v3 + 32) == 1 )
  {
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v22, (struct RGNOBJ *)&v19) )
      return v4;
    if ( *(_DWORD *)(*(_QWORD *)&v22.left + 84LL) == 1 )
    {
      v4 = 1;
    }
    else
    {
      LOBYTE(v4) = *(_DWORD *)(*(_QWORD *)&v22.left + 80LL) > 0xA0u;
      v4 += 2;
    }
    *((_QWORD *)this + 28) = *(_QWORD *)&v22.left;
LABEL_21:
    DC::vReleaseRao(this);
    return v4;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17, *((_DWORD *)a2 + 20));
  if ( v17 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v17, (struct RGNOBJ *)&v19);
    ++*(_DWORD *)(v17 + 32);
    v4 = RGNOBJ::iComplexity((RGNOBJ *)&v17);
    *((_QWORD *)this + 28) = v17;
    DC::vReleaseRao(this);
    if ( v3 )
    {
      if ( !--*(_DWORD *)(*(_QWORD *)&v22.left + 32LL) )
      {
        v16 = (RGNOBJ *)&v22;
        goto LABEL_42;
      }
    }
  }
LABEL_11:
  if ( v18 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
  return v4;
}
