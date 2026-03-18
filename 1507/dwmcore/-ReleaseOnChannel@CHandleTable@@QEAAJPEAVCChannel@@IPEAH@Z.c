/*
 * XREFs of ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z @ 0x180050BC4
 * Callers:
 *     ?MilResource_ReleaseOnChannel@@YAJPEAUMIL_CHANNEL__@@IPEAH@Z @ 0x180050F90 (-MilResource_ReleaseOnChannel@@YAJPEAUMIL_CHANNEL__@@IPEAH@Z.c)
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005003C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180050D34 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180123308 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CHandleTable::ReleaseOnChannel(CHandleTable *this, struct CChannel *a2, unsigned int a3, int *a4)
{
  unsigned int v8; // edi
  int *v9; // rbx
  int v10; // eax
  int v11; // eax
  _DWORD v13[10]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( a4 )
    *a4 = 0;
  if ( (unsigned int)HANDLE_TABLE::ValidEntry(this, a3) )
    v9 = (int *)(*((_QWORD *)this + 3) + a3 * *((_DWORD *)this + 2));
  else
    v9 = 0LL;
  if ( !v9 || !v9[1] )
  {
    v8 = -2147418113;
    MilUnexpectedErrorWithAsimovEvent(
      -2147418113,
      L"ReleaseOnChannel was called on a resource that is not anymore on this channel");
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x16Cu);
    goto LABEL_13;
  }
  v10 = *v9;
  if ( *v9 )
  {
    if ( v9[1] == 1 )
    {
      v13[0] = 19;
      v13[1] = a3;
      v13[2] = v10;
      v11 = CChannel::SendCommand(a2, v13, 0xCu);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x17Eu);
        goto LABEL_13;
      }
      v9[2] = *((_DWORD *)a2 + 4);
      *((_DWORD *)a2 + 4) = a3;
      if ( a4 )
        *a4 = 1;
    }
    --v9[1];
  }
LABEL_13:
  LeaveCriticalSection(&g_csCompositionEngine);
  return v8;
}
