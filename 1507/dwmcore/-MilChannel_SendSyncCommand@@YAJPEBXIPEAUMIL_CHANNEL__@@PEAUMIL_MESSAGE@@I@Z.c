/*
 * XREFs of ?MilChannel_SendSyncCommand@@YAJPEBXIPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@I@Z @ 0x180060690
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncFlush@CChannel@@QEAAJXZ @ 0x18004FF64 (-SyncFlush@CChannel@@QEAAJXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005003C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall MilChannel_SendSyncCommand(
        void *a1,
        unsigned int a2,
        struct MIL_CHANNEL__ *this,
        struct MIL_MESSAGE *a4,
        size_t Size)
{
  char *v7; // r14
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  size_t v11; // r8

  if ( a1 )
  {
    if ( this )
    {
      v7 = (char *)this + 144;
      *((_QWORD *)this + 18) = 0LL;
      *((_QWORD *)this + 19) = 0LL;
      *((_QWORD *)this + 20) = 0LL;
      *((_DWORD *)this + 42) = 0;
      v8 = CChannel::SendCommand(this, a1, a2);
      v9 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x212u);
      }
      else
      {
        v10 = CChannel::SyncFlush(this);
        v9 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x217u);
        }
        else if ( a4 )
        {
          v11 = 28LL;
          if ( (unsigned int)Size < 0x1CuLL )
            v11 = (unsigned int)Size;
          memcpy_0(a4, v7, v11);
        }
      }
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x224u);
    }
    else
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x21Du);
    }
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x21Cu);
  }
  return (unsigned int)v9;
}
