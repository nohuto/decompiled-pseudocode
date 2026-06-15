/*
 * XREFs of ?CalculateAPOVolume@CAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x180066670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
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
  if ( (_DWORD)v5 == *((_DWORD *)this + 20) )
  {
    if ( (_DWORD)v5 )
    {
      v9 = 0LL;
      v10 = v5;
      do
      {
        a3[v9] = *(float *)(*((_QWORD *)this + 13) + v9 * 4) * *((float *)this + 22);
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    *a4 = *((_BYTE *)this + 92);
    *a5 = *((_QWORD *)this + 12);
  }
  else
  {
    v6 = -2147024809;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x4Bu,
        (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        -2147024809);
    }
  }
  return v6;
}
