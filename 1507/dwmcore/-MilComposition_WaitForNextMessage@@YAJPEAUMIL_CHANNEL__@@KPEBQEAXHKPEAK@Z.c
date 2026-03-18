/*
 * XREFs of ?MilComposition_WaitForNextMessage@@YAJPEAUMIL_CHANNEL__@@KPEBQEAXHKPEAK@Z @ 0x180062F40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall MilComposition_WaitForNextMessage(
        struct MIL_CHANNEL__ *a1,
        unsigned int a2,
        void *const *a3,
        BOOL a4,
        DWORD dwMilliseconds,
        unsigned int *a6)
{
  BOOL v6; // r13d
  __int64 v8; // r14
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  int v11; // esi
  unsigned int v12; // r13d
  DWORD v13; // eax
  int v15; // eax
  __int64 v16; // rbp
  unsigned int v17; // edi
  signed int LastError; // eax
  HANDLE Handles[64]; // [rsp+40h] [rbp-258h] BYREF

  v6 = a4;
  v8 = a2;
  if ( !a1 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xFCu);
    return 2147942487LL;
  }
  if ( !a6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x100u);
    return 2147942487LL;
  }
  if ( a2 && !a3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x105u);
    return 2147942487LL;
  }
  if ( a2 > 0x3F )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x10Au);
    return 2147942487LL;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)a1 + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 184));
  if ( *((_BYTE *)a1 + 233) )
  {
    v11 = -2003303407;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303407, 0x262u);
  }
  else
  {
    v11 = 0;
    if ( *((_QWORD *)a1 + 22) )
    {
      v15 = NtDCompositionSubmitDWMBatch(*((unsigned int *)a1 + 16), *((_QWORD *)a1 + 22));
      if ( v15 >= 0
        || (v11 = v15 | 0x10000000, MilInstrumentationCheckHR(0x14u, 0LL, 0, v15 | 0x10000000, 0x72u), v11 >= 0) )
      {
        *((_QWORD *)a1 + 22) = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x19Du);
      }
      if ( v11 >= 0 )
        goto LABEL_9;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2BEu);
    }
    if ( v11 >= 0 )
    {
LABEL_9:
      v12 = *((_DWORD *)a1 + 4);
      EnterCriticalSection(&g_csCompositionEngine);
      if ( v12 )
      {
        v16 = *((_QWORD *)a1 + 6);
        do
        {
          v17 = *(_DWORD *)(v16 + 12LL * v12 + 8);
          memset_0((void *)(*((_QWORD *)a1 + 6) + v12 * *((_DWORD *)a1 + 8)), 0, *((unsigned int *)a1 + 8));
          v12 = v17;
        }
        while ( v17 );
      }
      LeaveCriticalSection(&g_csCompositionEngine);
      v6 = a4;
      v10 = (struct _RTL_CRITICAL_SECTION *)((char *)a1 + 184);
      *((_DWORD *)a1 + 4) = 0;
      goto LABEL_11;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x265u);
  }
LABEL_11:
  if ( v10 )
    LeaveCriticalSection(v10);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x439u);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 96));
    if ( *((struct MIL_CHANNEL__ **)a1 + 9) == (struct MIL_CHANNEL__ *)((char *)a1 + 72) )
    {
      ResetEvent(*((HANDLE *)a1 + 11));
      memcpy_0(Handles, a3, 8 * v8);
      Handles[v8] = (HANDLE)*((_QWORD *)a1 + 11);
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 96));
      SetLastError(0);
      v13 = WaitForMultipleObjects(v8 + 1, Handles, v6, dwMilliseconds);
      *a6 = v13;
      if ( v13 == -1 )
      {
        LastError = GetLastError();
        v11 = LastError;
        if ( LastError > 0 )
          v11 = (unsigned __int16)LastError | 0x80070000;
        if ( v11 >= 0 )
          v11 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x461u);
      }
    }
    else
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 96));
      *a6 = v8;
    }
  }
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x113u);
  return (unsigned int)v11;
}
