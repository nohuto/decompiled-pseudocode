/*
 * XREFs of ?MilChannel_CommitChannel@@YAJPEAUMIL_CHANNEL__@@@Z @ 0x1800A92B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall MilChannel_CommitChannel(struct MIL_CHANNEL__ *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  int v3; // esi
  unsigned int v4; // r14d
  int v6; // eax
  __int64 v7; // r15
  unsigned int v8; // edi

  if ( !a1 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC5u);
    return 2147942487LL;
  }
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)a1 + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 184));
  if ( *((_BYTE *)a1 + 233) )
  {
    v3 = -2003303407;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303407, 0x262u);
  }
  else
  {
    v3 = 0;
    if ( *((_QWORD *)a1 + 22) )
    {
      v6 = NtDCompositionSubmitDWMBatch(*((unsigned int *)a1 + 16), *((_QWORD *)a1 + 22));
      if ( v6 >= 0 || (v3 = v6 | 0x10000000, MilInstrumentationCheckHR(0x14u, 0LL, 0, v6 | 0x10000000, 0x72u), v3 >= 0) )
        *((_QWORD *)a1 + 22) = 0LL;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x19Du);
      if ( v3 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2BEu);
    }
    if ( v3 >= 0 )
    {
LABEL_5:
      v4 = *((_DWORD *)a1 + 4);
      EnterCriticalSection(&g_csCompositionEngine);
      if ( v4 )
      {
        v7 = *((_QWORD *)a1 + 6);
        do
        {
          v8 = *(_DWORD *)(v7 + 12LL * v4 + 8);
          memset_0((void *)(*((_QWORD *)a1 + 6) + v4 * *((_DWORD *)a1 + 8)), 0, *((unsigned int *)a1 + 8));
          v4 = v8;
        }
        while ( v8 );
      }
      LeaveCriticalSection(&g_csCompositionEngine);
      *((_DWORD *)a1 + 4) = 0;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x265u);
  }
LABEL_7:
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC7u);
  return (unsigned int)v3;
}
