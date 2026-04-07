/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180078CB8
 * Callers:
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180078350 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007E940 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800418CC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180070BE4 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180070C78 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x180072264 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x18007228C (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rbp
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rbp
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rbp
  const char *v9; // rdx
  __int64 v10; // rbp
  const char *v11; // rdx
  __int64 v12; // rbp
  const char *v13; // rdx
  __int64 v14; // rbp
  const char *v15; // rdx
  __int64 v16; // rbp
  const char *v17; // rdx
  __int64 v18; // rbp
  const char *v19; // rdx
  __int64 v20; // rbp
  const char *v21; // rdx
  unsigned __int64 v22; // rbp
  volatile signed __int32 **v23; // rdi
  _DWORD *v24; // rax
  const unsigned __int16 *v25; // rbx
  volatile signed __int32 *v26; // rax
  volatile signed __int32 *v27; // rsi
  char *v28; // rcx
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax

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
  v23 = (volatile signed __int32 **)((char *)this + 144);
  v24 = (_DWORD *)*((_QWORD *)this + 18);
  v25 = 0LL;
  if ( !v24 || *v24 != 1 || *((_QWORD *)this + 19) < v22 )
  {
    wil::details::shared_buffer::reset((volatile signed __int32 **)this + 18);
    if ( v22 )
    {
      v26 = (volatile signed __int32 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                         WPF::g_pProcessHeap,
                                         v22 + 4);
      v27 = v26;
      if ( v26 )
      {
        *v26 = 0;
        wil::details::shared_buffer::reset((volatile signed __int32 **)this + 18);
        *v23 = v27;
        *((_QWORD *)this + 19) = v22;
        _InterlockedIncrement(v27);
      }
    }
    else
    {
      wil::details::shared_buffer::reset((volatile signed __int32 **)this + 18);
    }
  }
  if ( *v23 )
  {
    v28 = (char *)(*v23 + 1);
    if ( *v23 != (volatile signed __int32 *)-4LL )
      v25 = (const unsigned __int16 *)&v28[*((_QWORD *)this + 19)];
  }
  else
  {
    v28 = 0LL;
  }
  v29 = wil::details::WriteResultString<unsigned short const *>(
          v28,
          v25,
          *((wil::details **)a2 + 2),
          (_QWORD *)this + 2);
  v30 = wil::details::WriteResultString<char const *>(
          v29,
          (const char *)v25,
          *((wil::details **)a2 + 4),
          (_QWORD *)this + 4);
  v31 = wil::details::WriteResultString<char const *>(
          v30,
          (const char *)v25,
          *((wil::details **)a2 + 5),
          (_QWORD *)this + 5);
  v32 = wil::details::WriteResultString<char const *>(
          v31,
          (const char *)v25,
          *((wil::details **)a2 + 6),
          (_QWORD *)this + 6);
  v33 = wil::details::WriteResultString<char const *>(
          v32,
          (const char *)v25,
          *((wil::details **)a2 + 8),
          (_QWORD *)this + 8);
  v34 = wil::details::WriteResultString<char const *>(
          v33,
          (const char *)v25,
          *((wil::details **)a2 + 15),
          (_QWORD *)this + 15);
  v35 = wil::details::WriteResultString<char const *>(
          v34,
          (const char *)v25,
          *((wil::details **)a2 + 13),
          (_QWORD *)this + 13);
  v36 = wil::details::WriteResultString<unsigned short const *>(
          v35,
          v25,
          *((wil::details **)a2 + 14),
          (_QWORD *)this + 14);
  v37 = wil::details::WriteResultString<char const *>(
          v36,
          (const char *)v25,
          *((wil::details **)a2 + 10),
          (_QWORD *)this + 10);
  wil::details::WriteResultString<unsigned short const *>(v37, v25, *((wil::details **)a2 + 11), (_QWORD *)this + 11);
}
