/*
 * XREFs of ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C02697A8
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0065D0C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0033D28 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0270484 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C02704DC (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C027333C (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 */

__int64 __fastcall GdiDeleteSprite(HDEV a1, HWND a2, void *a3)
{
  HDEV v6; // rsi
  unsigned int v7; // ebx
  const struct _SPRITESTATE *v8; // rcx
  __int64 v9; // rdx
  struct _METASPRITE *MetaSprite; // rdi
  int v11; // r9d
  unsigned int v12; // r15d
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  _DWORD *v18; // rax
  unsigned int i; // r14d
  __int64 v20; // rcx
  __int64 j; // rax
  struct SPRITE *Sprite; // rax
  struct SPRITE *v23; // rsi
  __int64 v24; // rcx
  int v25; // ebp
  __int64 v26; // rdi
  __int64 v27; // rcx
  W32PIDLOCK *v28; // r14
  int v29; // eax
  HDEV v31; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+28h] [rbp-50h]
  W32PIDLOCK *v33; // [rsp+30h] [rbp-48h]
  _BYTE v34[64]; // [rsp+38h] [rbp-40h] BYREF
  int v37; // [rsp+98h] [rbp+20h]

  v31 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v34, (struct PDEVOBJ *)&v31);
  v6 = v31;
  v7 = 0;
  v8 = (const struct _SPRITESTATE *)(v31 + 24);
  if ( *((_DWORD *)v31 + 41) )
  {
    MetaSprite = pSpGetMetaSprite(v8, a2, a3);
    if ( MetaSprite )
    {
      v12 = 0;
      v37 = 1;
      v13 = 1;
      if ( !v11 )
        goto LABEL_15;
      do
      {
        v32 = *((_QWORD *)MetaSprite + v12 + 4);
        v14 = *(_QWORD *)(v32 + 128);
        if ( v14 )
        {
          v15 = SURFOBJ_TO_SURFACE_NOT_NULL(v14);
          if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v15) )
          {
            v33 = (W32PIDLOCK *)(v16 + 272);
            W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v16 + 272));
            if ( *(_DWORD *)(v15 + 324) )
            {
              v17 = *(_DWORD *)(v15 + 116);
              if ( (v17 & 2) == 0 )
              {
                *(_DWORD *)(v15 + 116) = v17 | 2;
                v18 = (_DWORD *)v32;
                *(_QWORD *)(v15 + 416) = a1;
                *(_QWORD *)(v15 + 424) = a2;
                *(_QWORD *)(v15 + 432) = a3;
                *(_DWORD *)(v15 + 440) = 1;
                *v18 |= 0x400u;
                *(_DWORD *)MetaSprite |= 0x400u;
              }
              v13 = 0;
              v37 = 0;
            }
            else
            {
              v13 = v37;
            }
            W32PIDLOCK::vUnlockSingleThread(v33);
          }
          else
          {
            v13 = v37;
          }
        }
        ++v12;
      }
      while ( v12 < *((_DWORD *)v6 + 41) );
      if ( v13 )
      {
LABEL_15:
        for ( i = 0; i < *((_DWORD *)v6 + 41); ++i )
          vSpDeleteSprite(*((struct SPRITE **)MetaSprite + i + 4));
        v20 = *((_QWORD *)v6 + 22);
        if ( (struct _METASPRITE *)v20 == MetaSprite )
        {
          *((_QWORD *)v6 + 22) = *((_QWORD *)MetaSprite + 2);
        }
        else
        {
          for ( j = *(_QWORD *)(v20 + 16); (struct _METASPRITE *)j != MetaSprite; j = *(_QWORD *)(j + 16) )
            v20 = j;
          *(_QWORD *)(v20 + 16) = *((_QWORD *)MetaSprite + 2);
        }
        Win32FreePool(MetaSprite, v9);
      }
      goto LABEL_34;
    }
LABEL_33:
    v7 = -2143354870;
    goto LABEL_34;
  }
  Sprite = pSpGetSprite(v8, a2, a3);
  v23 = Sprite;
  if ( !Sprite )
    goto LABEL_33;
  v24 = *((_QWORD *)Sprite + 16);
  v25 = 1;
  if ( !v24 )
    goto LABEL_32;
  v26 = SURFOBJ_TO_SURFACE_NOT_NULL(v24);
  if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)v26) )
    goto LABEL_32;
  v28 = (W32PIDLOCK *)(v27 + 272);
  W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v27 + 272));
  if ( *(_DWORD *)(v26 + 324) )
  {
    v29 = *(_DWORD *)(v26 + 116);
    if ( (v29 & 2) == 0 )
    {
      *(_QWORD *)(v26 + 416) = a1;
      *(_DWORD *)(v26 + 116) = v29 | 2;
      *(_QWORD *)(v26 + 424) = a2;
      *(_QWORD *)(v26 + 432) = a3;
      *(_DWORD *)(v26 + 440) = 1;
      *(_DWORD *)v23 |= 0x400u;
    }
    v25 = 0;
  }
  W32PIDLOCK::vUnlockSingleThread(v28);
  if ( v25 )
LABEL_32:
    vSpDeleteSprite(v23);
LABEL_34:
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v34);
  return v7;
}
