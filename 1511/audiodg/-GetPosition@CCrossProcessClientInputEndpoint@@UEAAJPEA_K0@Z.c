/*
 * XREFs of ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x14003B1C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?AEWMILOG_GENERIC@@YAXKPEAXE_K111NNNN@Z @ 0x140039664 (-AEWMILOG_GENERIC@@YAXKPEAXE_K111NNNN@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetPosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 **a3)
{
  int v3; // ebx

  v3 = 0;
  if ( a2 )
  {
    *a2 = *(_QWORD *)(*((_QWORD *)this - 40) + 8LL);
    if ( a3 )
      *a3 = *(unsigned __int64 **)(*((_QWORD *)this - 40) + 48LL);
    *((_QWORD *)this - 28) = *a2;
  }
  else
  {
    v3 = -2147467261;
  }
  if ( a3 )
    a3 = (unsigned __int64 **)*a3;
  if ( a2 )
    a2 = (unsigned __int64 *)*a2;
  AEWMILOG_GENERIC(
    *((_QWORD *)this - 40),
    a2,
    6u,
    (__int64)a2,
    (unsigned __int64)a3,
    *(_QWORD *)(*((_QWORD *)this - 40) + 8LL),
    *(_QWORD *)(*((_QWORD *)this - 40) + 16LL),
    0.0,
    0.0,
    0.0,
    0.0);
  if ( v3 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_53874a42835c40d8eef9b8297bd9f709_Traceguids, v3);
  }
  return (unsigned int)v3;
}
