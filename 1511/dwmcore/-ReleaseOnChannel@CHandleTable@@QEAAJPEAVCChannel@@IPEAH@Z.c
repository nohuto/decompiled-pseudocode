/*
 * XREFs of ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z @ 0x1800A13F8
 * Callers:
 *     ?MilResource_ReleaseOnChannel@@YAJPEAUMIL_CHANNEL__@@IPEAH@Z @ 0x1800A1010 (-MilResource_ReleaseOnChannel@@YAJPEAUMIL_CHANNEL__@@IPEAH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18009FD64 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800A0650 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180138878 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CHandleTable::ReleaseOnChannel(CHandleTable *this, struct CChannel *a2, unsigned int a3, int *a4)
{
  unsigned int v8; // ebx
  int *v9; // rdi
  int v10; // eax
  int v11; // eax
  _DWORD v13[6]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( a4 )
    *a4 = 0;
  if ( !a3 || a3 >= *((_DWORD *)this + 3) || (v9 = (int *)(a3 * *((_DWORD *)this + 2) + *((_QWORD *)this + 3)), !*v9) )
    v9 = 0LL;
  if ( !v9 || !v9[1] )
  {
    v8 = -2147418113;
    MilUnexpectedErrorWithAsimovEvent(
      -2147418113,
      L"ReleaseOnChannel was called on a resource that is not anymore on this channel");
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x16Cu);
    goto LABEL_15;
  }
  v10 = *v9;
  if ( *v9 )
  {
    if ( v9[1] == 1 )
    {
      v13[0] = 22;
      v13[1] = a3;
      v13[2] = v10;
      v11 = CChannel::BeginCommand(a2, v13, 0xCu, 0);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x14Fu);
      }
      else
      {
        if ( *((_BYTE *)a2 + 233) )
        {
          CDataStreamWriter::EndItem(*((CDataStreamWriter **)a2 + 22));
          *((_BYTE *)a2 + 233) = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 184));
          v8 = 0;
          v9[2] = *((_DWORD *)a2 + 4);
          *((_DWORD *)a2 + 4) = a3;
          if ( a4 )
            *a4 = 1;
          goto LABEL_14;
        }
        v8 = -2003303406;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x1E3u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x150u);
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x17Eu);
      goto LABEL_15;
    }
LABEL_14:
    --v9[1];
  }
LABEL_15:
  LeaveCriticalSection(&g_csCompositionEngine);
  return v8;
}
