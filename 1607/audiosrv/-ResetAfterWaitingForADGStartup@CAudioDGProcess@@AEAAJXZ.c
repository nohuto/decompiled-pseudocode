/*
 * XREFs of ?ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180084C90
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180017550 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

signed int __fastcall CAudioDGProcess::ResetAfterWaitingForADGStartup(CAudioDGProcess *this)
{
  signed int result; // eax
  int v3; // r9d
  CAudioSession *v4; // rcx
  void *v5; // rcx
  char *v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  signed int v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  signed int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

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
    result = 0;
    v9 = 0;
    goto LABEL_12;
  }
  result = GetLastError();
  v3 = result;
  if ( result > 0 )
    result = (unsigned __int16)result | 0x80070000;
  v9 = result;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids, v3);
    result = v9;
LABEL_12:
    v4 = WPP_GLOBAL_Control;
  }
  if ( result < 0 )
  {
    if ( v4 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 4) != 0 && *((_BYTE *)v4 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v4 + 2), 0x19u, (__int64)&WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids, result);
      result = v9;
    }
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::ResetAfterWaitingForADGStartup");
      v15 = 0;
      v18 = 0;
      v13 = &v10;
      v16 = &v9;
      v10 = 473;
      v14 = 4;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v7, v8, 5u, &pData);
      return v9;
    }
  }
  return result;
}
