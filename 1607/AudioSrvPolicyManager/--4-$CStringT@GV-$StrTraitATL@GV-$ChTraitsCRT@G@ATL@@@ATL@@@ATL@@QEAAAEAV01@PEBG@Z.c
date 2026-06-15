/*
 * XREFs of ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800094F4
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180006150 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180006924 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800104C8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000A18C (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

int **__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        int **a1,
        char *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  rsize_t v8; // r9
  int *v9; // rax
  volatile signed __int32 *v10; // rdx
  __int64 v11; // rbx

  if ( !a2 )
    goto LABEL_13;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&a2[2 * v4] );
  if ( (_DWORD)v4 )
  {
    v5 = (a2 - (char *)*a1) >> 1;
    v6 = (unsigned int)*(*a1 - 4);
    if ( (int)((*(*a1 - 3) - v4) | (1 - *(*a1 - 2))) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)v4);
    v7 = (char *)*a1;
    v8 = 2LL * (int)v4;
    if ( v5 > v6 )
      memcpy_s(v7, v8, a2, v8);
    else
      memmove_s(v7, v8, &v7[2 * v5], v8);
    if ( (int)v4 < 0 || (int)v4 > *(*a1 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *(*a1 - 4) = v4;
    *((_WORD *)*a1 + (int)v4) = 0;
  }
  else
  {
LABEL_13:
    v9 = *a1;
    v10 = *a1 - 6;
    v11 = *(_QWORD *)v10;
    if ( *((_DWORD *)v10 + 2) )
    {
      if ( *((int *)v10 + 4) >= 0 )
      {
        if ( _InterlockedDecrement(v10 + 4) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 8LL))(*(_QWORD *)v10);
        *a1 = (int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) + 24);
      }
      else
      {
        if ( *(v9 - 3) < 0 )
          ATL::AtlThrowImpl(-2147024809);
        *(v9 - 4) = 0;
        *(_WORD *)*a1 = 0;
      }
    }
  }
  return a1;
}
