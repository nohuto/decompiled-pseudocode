/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180077A5C
 * Callers:
 *     ?NotifyFailure@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180076E90 (-NotifyFailure@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180077514 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007DD60 (-NotifyFailure@-$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180012AFC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180075884 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180075914 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180077A0C (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x180077A34 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x18007824C (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // r14
  const unsigned __int16 *v5; // rdx
  __int64 v6; // r14
  const unsigned __int16 *v7; // rdx
  __int64 v8; // r14
  const char *v9; // rdx
  __int64 v10; // r14
  const char *v11; // rdx
  __int64 v12; // r14
  const char *v13; // rdx
  __int64 v14; // r14
  const char *v15; // rdx
  __int64 v16; // r14
  const char *v17; // rdx
  __int64 v18; // r14
  const char *v19; // rdx
  __int64 v20; // r14
  const char *v21; // rdx
  unsigned __int64 v22; // r14
  _QWORD *v23; // r15
  _DWORD *v24; // rax
  const unsigned __int16 *v25; // rbp
  int *v26; // rax
  char *v27; // rcx
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v4 = wil::details::ResultStringSize(*((wil::details **)a2 + 14), (const unsigned __int16 *)a2);
  v6 = wil::details::ResultStringSize(*((wil::details **)a2 + 11), v5) + v4;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 2), v7) + v6;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 13), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 10), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 8), v13) + v12;
  v16 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v15) + v14;
  v18 = wil::details::ResultStringSize(*((wil::details **)a2 + 5), v17) + v16;
  v20 = wil::details::ResultStringSize(*((wil::details **)a2 + 4), v19) + v18;
  v22 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), v21) + v20;
  v23 = (_QWORD *)((char *)this + 144);
  v24 = (_DWORD *)*((_QWORD *)this + 18);
  v25 = 0LL;
  if ( !v24 || *v24 != 1 || *((_QWORD *)this + 19) < v22 )
  {
    wil::details::shared_buffer::reset((volatile signed __int32 **)this + 18);
    if ( v22 )
    {
      v26 = (int *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                     WPF::g_pProcessHeap,
                     v22 + 4);
      if ( v26 )
      {
        *v26 = 0;
        wil::details::shared_buffer::assign((wil::StoredFailureInfo *)((char *)this + 144), v26, v22);
      }
    }
    else
    {
      wil::details::shared_buffer::reset((volatile signed __int32 **)this + 18);
    }
  }
  if ( *v23 )
  {
    v27 = (char *)(*v23 + 4LL);
    if ( *v23 != -4LL )
      v25 = (const unsigned __int16 *)&v27[*((_QWORD *)this + 19)];
  }
  else
  {
    v27 = 0LL;
  }
  v28 = wil::details::WriteResultString<unsigned short const *>(
          v27,
          v25,
          *((wil::details **)a2 + 2),
          (_QWORD *)this + 2);
  v29 = wil::details::WriteResultString<char const *>(v28, (__int64)v25, *((wil::details **)a2 + 4), (_QWORD *)this + 4);
  v30 = wil::details::WriteResultString<char const *>(v29, (__int64)v25, *((wil::details **)a2 + 5), (_QWORD *)this + 5);
  v31 = wil::details::WriteResultString<char const *>(v30, (__int64)v25, *((wil::details **)a2 + 6), (_QWORD *)this + 6);
  v32 = wil::details::WriteResultString<char const *>(v31, (__int64)v25, *((wil::details **)a2 + 8), (_QWORD *)this + 8);
  v33 = wil::details::WriteResultString<char const *>(
          v32,
          (__int64)v25,
          *((wil::details **)a2 + 15),
          (_QWORD *)this + 15);
  v34 = wil::details::WriteResultString<char const *>(
          v33,
          (__int64)v25,
          *((wil::details **)a2 + 13),
          (_QWORD *)this + 13);
  v35 = wil::details::WriteResultString<unsigned short const *>(
          v34,
          v25,
          *((wil::details **)a2 + 14),
          (_QWORD *)this + 14);
  v36 = wil::details::WriteResultString<char const *>(
          v35,
          (__int64)v25,
          *((wil::details **)a2 + 10),
          (_QWORD *)this + 10);
  wil::details::WriteResultString<unsigned short const *>(v36, v25, *((wil::details **)a2 + 11), (_QWORD *)this + 11);
}
