/*
 * XREFs of ?Initialize@CPartitionScheduler@@IEAAJXZ @ 0x1800B4160
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180090CF0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAAJPEA_K@Z @ 0x1800B40A8 (-GetAbsoluteTime@CPartitionScheduler@@IEAAJPEA_K@Z.c)
 */

__int64 __fastcall CPartitionScheduler::Initialize(LARGE_INTEGER *this)
{
  unsigned __int64 *p_QuadPart; // rsi
  LARGE_INTEGER *v2; // r14
  int AbsoluteTime; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  signed int LastError; // eax
  signed int v9; // eax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  this[5].QuadPart = 0LL;
  p_QuadPart = (unsigned __int64 *)&this[4].QuadPart;
  this[3].QuadPart = 0LL;
  v2 = this + 7;
  this[6].QuadPart = 0LL;
  this[8].QuadPart = 0LL;
  this[9].QuadPart = 0LL;
  this[4].QuadPart = 0LL;
  this[7].QuadPart = 0LL;
  this[10].QuadPart = 1LL;
  SetLastError(0);
  if ( !QueryPerformanceFrequency(this + 10) )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    v11 = 60;
    goto LABEL_12;
  }
  SetLastError(0);
  if ( !QueryPerformanceCounter(v2) )
  {
    v9 = GetLastError();
    v5 = v9;
    if ( v9 > 0 )
      v5 = (unsigned __int16)v9 | 0x80070000;
    v11 = 62;
LABEL_12:
    if ( (v5 & 0x80000000) == 0 )
      v5 = -2003304445;
    v10 = v5;
    goto LABEL_16;
  }
  this[8] = *v2;
  AbsoluteTime = CPartitionScheduler::GetAbsoluteTime(this, p_QuadPart);
  v5 = AbsoluteTime;
  if ( AbsoluteTime < 0 )
  {
    v11 = 66;
    v10 = AbsoluteTime;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v10, v11);
    return v5;
  }
  v6 = *p_QuadPart;
  this[5].QuadPart = 0LL;
  this[3].QuadPart = v6;
  return v5;
}
