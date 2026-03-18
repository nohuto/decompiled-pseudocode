/*
 * XREFs of DwmAsyncMagnSetWindowFilterList @ 0x1C025C38C
 * Callers:
 *     MagpComposeDesktop @ 0x1C0093C90 (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01F5668 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowFilterList(PVOID Object, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v8; // ebx
  int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // r8
  _BYTE v14[272]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(&v14[2], 0, 0x10EuLL);
    v9 = *a4;
    *(_WORD *)&v14[4] = 0x8000;
    *(_DWORD *)&v14[60] = a4[1];
    *(_DWORD *)v14 = 17826024;
    *(_DWORD *)&v14[40] = 1073741921;
    v10 = (unsigned int)(*(_DWORD *)&v14[60] + v9);
    *(_QWORD *)&v14[48] = a2;
    *(_QWORD *)&v14[264] = a3;
    *(_DWORD *)&v14[56] = v9;
    if ( (unsigned int)v10 >= 0x19 )
      v10 = 25LL;
    if ( (_DWORD)v10 )
    {
      v11 = *((_QWORD *)a4 + 1) - (_QWORD)&v14[64];
      v12 = &v14[64];
      do
      {
        *v12 = *(_QWORD *)((char *)v12 + v11);
        ++v12;
        --v10;
      }
      while ( v10 );
    }
    EtwUpdateEvent(0LL);
    v8 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}
