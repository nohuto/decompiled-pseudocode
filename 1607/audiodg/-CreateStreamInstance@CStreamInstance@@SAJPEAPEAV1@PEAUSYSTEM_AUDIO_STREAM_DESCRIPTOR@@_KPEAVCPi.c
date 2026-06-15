/*
 * XREFs of ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPipeInstance@@@Z @ 0x140001620
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400184A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CStreamInstance::CreateStreamInstance(
        struct CStreamInstance **a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        __int64 a3,
        struct CPipeInstance *a4)
{
  HRESULT v8; // edi
  HANDLE v9; // rbx
  struct CStreamInstance *v10; // rax
  struct CStreamInstance *v11; // rdx
  int v12; // ecx

  *a1 = 0LL;
  v8 = CoImpersonateClient();
  if ( v8 >= 0 )
  {
    v9 = OpenProcess(0x2000u, 0, *((_DWORD *)a2 + 3));
    CoRevertToSelf();
    v10 = (struct CStreamInstance *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      v12 = *(_DWORD *)a2;
      *(_QWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 1) = 0LL;
      *((_WORD *)v10 + 8) = 0;
      *((_DWORD *)v10 + 5) = v12;
      *((_QWORD *)v10 + 3) = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      *((_QWORD *)v10 + 5) = 0LL;
      *((_QWORD *)v10 + 6) = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      *(_QWORD *)v11 = a4;
      v8 = 0;
      *((_QWORD *)v11 + 5) = v9;
      *((_QWORD *)v11 + 1) = a3;
      v9 = 0LL;
      *a1 = v11;
    }
    else
    {
      v8 = -2147024882;
    }
    if ( v9 )
      CloseHandle(v9);
  }
  return (unsigned int)v8;
}
