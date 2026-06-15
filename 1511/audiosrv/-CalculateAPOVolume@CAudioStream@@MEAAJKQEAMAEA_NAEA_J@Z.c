/*
 * XREFs of ?CalculateAPOVolume@CAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x180064A10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioStream::CalculateAPOVolume(
        CAudioStream *this,
        unsigned int a2,
        float *const a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8

  v5 = a2;
  v6 = 0;
  if ( (_DWORD)v5 == *((_DWORD *)this + 18) )
  {
    if ( (_DWORD)v5 )
    {
      v9 = 0LL;
      v10 = v5;
      do
      {
        a3[v9] = *(float *)(*((_QWORD *)this + 12) + v9 * 4) * *((float *)this + 20);
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    *a4 = *((_BYTE *)this + 84);
    *a5 = *((_QWORD *)this + 11);
  }
  else
  {
    v6 = -2147024809;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x47u,
        (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
        -2147024809);
    }
  }
  return v6;
}
