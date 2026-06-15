/*
 * XREFs of ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140015940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetFrameFormat(
        CCrossProcessBaseEndpoint *this,
        struct tWAVEFORMATEX **a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  struct tWAVEFORMATEX *v5; // rax
  struct tWAVEFORMATEX *v6; // rsi
  unsigned int v7; // ebx

  if ( !*((_DWORD *)this + 14) )
  {
    v7 = -2005139437;
LABEL_10:
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        17LL,
        &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
        v7);
    }
    return v7;
  }
  if ( !a2 )
  {
    v7 = -2147467261;
    goto LABEL_10;
  }
  v3 = *((_QWORD *)this + 9);
  v4 = *(unsigned __int16 *)(v3 + 168);
  v5 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v4 + 18);
  v6 = v5;
  if ( v5 )
  {
    memcpy_0(v5, (const void *)(v3 + 152), v4 + 18);
    v7 = 0;
  }
  else
  {
    v7 = -2147024882;
  }
  *a2 = v6;
  if ( (v7 & 0x80000000) != 0 )
    goto LABEL_10;
  return v7;
}
