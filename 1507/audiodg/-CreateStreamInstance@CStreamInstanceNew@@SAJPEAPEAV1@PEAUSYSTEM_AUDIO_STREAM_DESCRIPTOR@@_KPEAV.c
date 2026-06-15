/*
 * XREFs of ?CreateStreamInstance@CStreamInstanceNew@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPipeInstance@@@Z @ 0x140013F90
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140019054 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

HRESULT __fastcall CStreamInstanceNew::CreateStreamInstance(
        struct CStreamInstanceNew **a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        __int64 a3,
        struct CPipeInstance *a4)
{
  HRESULT result; // eax
  HANDLE v9; // r14
  _WORD *v10; // rax
  int v11; // ecx

  *a1 = 0LL;
  result = CoImpersonateClient();
  if ( result >= 0 )
  {
    v9 = OpenProcess(0x2000u, 0, *((_DWORD *)a2 + 3));
    CoRevertToSelf();
    v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      v11 = *(_DWORD *)a2;
      v10[8] = 0;
      *((_DWORD *)v10 + 5) = v11;
      *((_QWORD *)v10 + 3) = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      *((_QWORD *)v10 + 6) = 0LL;
      *(_QWORD *)v10 = a4;
      *((_QWORD *)v10 + 1) = a3;
      *((_QWORD *)v10 + 5) = v9;
      *a1 = (struct CStreamInstanceNew *)v10;
      return 0;
    }
    else
    {
      if ( v9 )
        CloseHandle(v9);
      return -2147024882;
    }
  }
  return result;
}
