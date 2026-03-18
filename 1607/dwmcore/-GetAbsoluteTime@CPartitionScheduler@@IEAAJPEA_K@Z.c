/*
 * XREFs of ?GetAbsoluteTime@CPartitionScheduler@@IEAAJPEA_K@Z @ 0x1800B6204
 * Callers:
 *     ?Initialize@CPartitionScheduler@@IEAAJXZ @ 0x1800B62BC (-Initialize@CPartitionScheduler@@IEAAJXZ.c)
 *     ?UpdateTimes@CPartitionScheduler@@IEAAJXZ @ 0x1800B6380 (-UpdateTimes@CPartitionScheduler@@IEAAJXZ.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180119AB0 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPartitionScheduler::GetAbsoluteTime(LARGE_INTEGER *this, unsigned __int64 *a2)
{
  signed int v4; // ebx
  LARGE_INTEGER v5; // rax
  LARGE_INTEGER v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  signed int LastError; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  SetLastError(0);
  if ( QueryPerformanceCounter(&PerformanceCount) )
  {
    v5 = PerformanceCount;
    v6 = this[8];
    if ( PerformanceCount.QuadPart < (unsigned __int64)v6.QuadPart )
    {
      ++this[11].LowPart;
      v4 = -2003304293;
      MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, -2003304293, 0xB0u);
      goto LABEL_12;
    }
    this[9] = v6;
    this[8] = v5;
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v4, 0xA6u);
  }
  if ( v4 < 0 )
LABEL_12:
    MilInstrumentationCheckHR(0x14u, &dword_1801B083C, 1u, v4, 0x59u);
  v7 = (this[8].QuadPart - this[7].QuadPart) / (unsigned __int64)this[10].QuadPart;
  v8 = 10000000 * (this[8].QuadPart - this[7].QuadPart - this[10].QuadPart * v7) / this[10].QuadPart + 10000000 * v7;
  result = (unsigned int)v4;
  *a2 = v8;
  *a2 = this[3].QuadPart + v8;
  return result;
}
