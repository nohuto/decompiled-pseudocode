/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0002210
 * Callers:
 *     MouseAddDeviceEx @ 0x1C000B420 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 *     MouConfiguration @ 0x1C000E020 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rdx
  __int64 v17; // rax
  const wchar_t *v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]

  v6 = L"<NULL>";
  v10 = 14LL;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = -1LL;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= a2 )
  {
    if ( a6 )
    {
      if ( *a6 )
      {
        v17 = -1LL;
        do
          v14 = a6[++v17] == 0;
        while ( !v14 );
        v16 = 2 * v17 + 2;
      }
      else
      {
        v16 = 14LL;
      }
      v18 = L"<NULL>";
      if ( *a6 )
        v18 = a6;
    }
    else
    {
      v16 = 10LL;
      v18 = L"NULL";
    }
    ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11),
      43LL,
      &WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids,
      a4,
      v18,
      v16,
      0LL);
  }
  if ( a6 )
  {
    if ( *a6 )
    {
      do
        v14 = a6[++v12] == 0;
      while ( !v14 );
      v10 = 2 * v12 + 2;
      if ( *a6 )
        v6 = a6;
    }
  }
  else
  {
    v10 = 10LL;
    v6 = L"NULL";
  }
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, a2, a3, &WPP_d47a8789a59c909c2434250cabe99dc1_Traceguids, v19, v6, v10, 0LL);
}
