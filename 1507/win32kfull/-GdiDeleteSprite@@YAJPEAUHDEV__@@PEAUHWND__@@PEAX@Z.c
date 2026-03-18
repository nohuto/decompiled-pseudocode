/*
 * XREFs of ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C026C778
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000E520 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C009CE8C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272F64 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0272FBC (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0275DF4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

__int64 __fastcall GdiDeleteSprite(HDEV a1, HWND a2, void *a3)
{
  HDEV v6; // rsi
  unsigned int v7; // ebx
  const struct _SPRITESTATE *v8; // rcx
  struct _METASPRITE *MetaSprite; // rdi
  int v10; // r9d
  unsigned int v11; // r15d
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  _DWORD *v17; // rax
  unsigned int i; // r14d
  __int64 v19; // rcx
  __int64 j; // rax
  struct SPRITE *Sprite; // rax
  struct SPRITE *v22; // rsi
  __int64 v23; // rcx
  int v24; // ebp
  __int64 v25; // rdi
  __int64 v26; // rcx
  W32PIDLOCK *v27; // r14
  int v28; // eax
  HDEV v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h]
  W32PIDLOCK *v32; // [rsp+30h] [rbp-48h]
  _BYTE v33[64]; // [rsp+38h] [rbp-40h] BYREF
  int v36; // [rsp+98h] [rbp+20h]

  v30 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v33, (struct PDEVOBJ *)&v30);
  v6 = v30;
  v7 = 0;
  v8 = (const struct _SPRITESTATE *)(v30 + 24);
  if ( *((_DWORD *)v30 + 41) )
  {
    MetaSprite = pSpGetMetaSprite(v8, a2, a3);
    if ( MetaSprite )
    {
      v11 = 0;
      v36 = 1;
      v12 = 1;
      if ( !v10 )
        goto LABEL_15;
      do
      {
        v31 = *((_QWORD *)MetaSprite + v11 + 4);
        v13 = *(_QWORD *)(v31 + 128);
        if ( v13 )
        {
          v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
          if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v14) )
          {
            v32 = (W32PIDLOCK *)(v15 + 264);
            W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v15 + 264));
            if ( *(_DWORD *)(v14 + 316) )
            {
              v16 = *(_DWORD *)(v14 + 116);
              if ( (v16 & 2) == 0 )
              {
                *(_DWORD *)(v14 + 116) = v16 | 2;
                v17 = (_DWORD *)v31;
                *(_QWORD *)(v14 + 408) = a1;
                *(_QWORD *)(v14 + 416) = a2;
                *(_QWORD *)(v14 + 424) = a3;
                *(_DWORD *)(v14 + 432) = 1;
                *v17 |= 0x400u;
                *(_DWORD *)MetaSprite |= 0x400u;
              }
              v12 = 0;
              v36 = 0;
            }
            else
            {
              v12 = v36;
            }
            W32PIDLOCK::vUnlockSingleThread(v32);
          }
          else
          {
            v12 = v36;
          }
        }
        ++v11;
      }
      while ( v11 < *((_DWORD *)v6 + 41) );
      if ( v12 )
      {
LABEL_15:
        for ( i = 0; i < *((_DWORD *)v6 + 41); ++i )
          vSpDeleteSprite(*((struct SPRITE **)MetaSprite + i + 4));
        v19 = *((_QWORD *)v6 + 22);
        if ( (struct _METASPRITE *)v19 == MetaSprite )
        {
          *((_QWORD *)v6 + 22) = *((_QWORD *)MetaSprite + 2);
        }
        else
        {
          for ( j = *(_QWORD *)(v19 + 16); (struct _METASPRITE *)j != MetaSprite; j = *(_QWORD *)(j + 16) )
            v19 = j;
          *(_QWORD *)(v19 + 16) = *((_QWORD *)MetaSprite + 2);
        }
        Win32FreePool(MetaSprite);
      }
      goto LABEL_34;
    }
LABEL_33:
    v7 = -2143354870;
    goto LABEL_34;
  }
  Sprite = pSpGetSprite(v8, a2, a3);
  v22 = Sprite;
  if ( !Sprite )
    goto LABEL_33;
  v23 = *((_QWORD *)Sprite + 16);
  v24 = 1;
  if ( !v23 )
    goto LABEL_32;
  v25 = SURFOBJ_TO_SURFACE_NOT_NULL(v23);
  if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v25) )
    goto LABEL_32;
  v27 = (W32PIDLOCK *)(v26 + 264);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v26 + 264));
  if ( *(_DWORD *)(v25 + 316) )
  {
    v28 = *(_DWORD *)(v25 + 116);
    if ( (v28 & 2) == 0 )
    {
      *(_QWORD *)(v25 + 408) = a1;
      *(_DWORD *)(v25 + 116) = v28 | 2;
      *(_QWORD *)(v25 + 416) = a2;
      *(_QWORD *)(v25 + 424) = a3;
      *(_DWORD *)(v25 + 432) = 1;
      *(_DWORD *)v22 |= 0x400u;
    }
    v24 = 0;
  }
  W32PIDLOCK::vUnlockSingleThread(v27);
  if ( v24 )
LABEL_32:
    vSpDeleteSprite(v22);
LABEL_34:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v33);
  return v7;
}
