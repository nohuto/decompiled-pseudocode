/*
 * XREFs of ?PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180006624
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180006498 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDGProcess::PrepareToWaitForADGStartup(CAudioDGProcess *this)
{
  HANDLE v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  signed int LastError; // eax
  struct _SECURITY_ATTRIBUTES v7; // [rsp+20h] [rbp-28h] BYREF

  v7.lpSecurityDescriptor = 0LL;
  v7.nLength = 24;
  v7.bInheritHandle = 1;
  v2 = CreateEventW(&v7, 1, 0, 0LL);
  *((_QWORD *)this + 13) = v2;
  if ( v2 )
  {
    v3 = 0;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    else
      v3 = LastError;
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_4;
    }
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      19LL,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      (unsigned int)LastError);
  }
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_4:
  if ( (v3 & 0x80000000) != 0
    && (struct _GUID *)v4 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v4 + 28) & 4) != 0
    && *(_BYTE *)(v4 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v4 + 16), 20LL, &WPP_790b6676494959b41396352d3c3efd49_Traceguids, v3);
  }
  return v3;
}
