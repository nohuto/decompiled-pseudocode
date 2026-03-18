/*
 * XREFs of ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x1C002C694
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0040258 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ::bTightBoundsToRegion(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v12; // [rsp+48h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 4);
  v3 = 1;
  if ( v1 )
  {
    v4 = *(_DWORD *)(v1 + 36);
    if ( (v4 & 0x4000) != 0 && (v4 & 0x40) != 0 )
    {
      if ( *(_QWORD *)(v1 + 488) )
      {
        if ( *(_DWORD *)(v1 + 504) )
        {
          v6 = *(_QWORD *)(v1 + 1544);
          v12 = *(struct _RECTL *)(v1 + 1472);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v12) )
          {
            v3 = 0;
            RGNMEMOBJ::RGNMEMOBJ(&v8, 1LL);
            if ( v8 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v8, &v12);
              *(_OWORD *)(*((_QWORD *)this + 4) + 1472LL) = 0LL;
              if ( v6 )
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
                v7 = *(_QWORD *)(*((_QWORD *)this + 4) + 1544LL);
                v10 = v7;
                if ( v11[0]
                  && v7
                  && RGNOBJ::bMerge((RGNOBJ *)v11, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v8, BYTE2(gafjRgnOp))
                  && RGNOBJ::bSwap((RGNOBJ *)v11, (struct RGNOBJ *)&v10) )
                {
                  v3 = 1;
                  *(_QWORD *)(*((_QWORD *)this + 4) + 1544LL) = v10;
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
              }
              else
              {
                *(_QWORD *)(*((_QWORD *)this + 4) + 1544LL) = v8;
                v8 = 0LL;
                v3 = 1;
              }
            }
            if ( v9 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
          }
        }
      }
    }
  }
  return v3;
}
