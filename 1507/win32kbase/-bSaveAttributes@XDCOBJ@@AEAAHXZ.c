/*
 * XREFs of ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C003BA40
 * Callers:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00AF2A0 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSaveAttributes(XDCOBJ *this)
{
  _OWORD *v2; // rax
  _OWORD *v3; // r8
  __int64 v4; // rcx

  v2 = *(_OWORD **)(*(_QWORD *)this + 80LL);
  if ( v2 != (_OWORD *)(*(_QWORD *)this + 536LL) )
  {
    v3 = (_OWORD *)(*(_QWORD *)this + 960LL);
    if ( v2 != v3 )
    {
      if ( !*((_DWORD *)this + 3) )
      {
        v4 = 3LL;
        do
        {
          *v3 = *v2;
          v3[1] = v2[1];
          v3[2] = v2[2];
          v3[3] = v2[3];
          v3[4] = v2[4];
          v3[5] = v2[5];
          v3[6] = v2[6];
          v3 += 8;
          *(v3 - 1) = v2[7];
          v2 += 8;
          --v4;
        }
        while ( v4 );
        *v3 = *v2;
        v3[1] = v2[1];
      }
      *(_QWORD *)(*(_QWORD *)this + 952LL) = *(_QWORD *)(*(_QWORD *)this + 80LL);
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 960LL;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return 1LL;
}
