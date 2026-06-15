/*
 * XREFs of ?ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18006B744
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180006498 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDGProcess::ResetAfterWaitingForADGStartup(CAudioDGProcess *this)
{
  signed int LastError; // eax
  signed int v3; // ebx
  __int64 v4; // rcx
  void *v5; // rcx
  char *v6; // rcx

  if ( ResetEvent(*((HANDLE *)this + 13)) )
  {
    v5 = (void *)*((_QWORD *)this + 11);
    if ( v5 )
    {
      WaitForSingleObjectEx(v5, 0xFFFFFFFF, 0);
      v6 = (char *)*((_QWORD *)this + 11);
      if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(v6);
        *((_QWORD *)this + 11) = 0LL;
      }
    }
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
      goto LABEL_14;
    }
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x18u,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      LastError);
  }
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_14:
  if ( v3 < 0
    && (struct _GUID *)v4 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v4 + 28) & 4) != 0
    && *(_BYTE *)(v4 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v4 + 16), 0x19u, (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids, v3);
  }
  return (unsigned int)v3;
}
