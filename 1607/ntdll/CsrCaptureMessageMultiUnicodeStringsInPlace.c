/*
 * XREFs of CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x1800759F0
 * Callers:
 *     <none>
 * Callees:
 *     CsrCaptureMessageString @ 0x180075B10 (CsrCaptureMessageString.c)
 *     CsrAllocateCaptureBuffer @ 0x180075C10 (CsrAllocateCaptureBuffer.c)
 */

__int64 __fastcall CsrCaptureMessageMultiUnicodeStringsInPlace(__int64 *a1, unsigned int a2, __int64 a3)
{
  char v3; // bp
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 CaptureBuffer; // rax
  unsigned int v12; // edi
  unsigned __int16 *v13; // r14
  unsigned __int16 v14; // cx

  v3 = LdrpIsSecureProcess;
  if ( LdrpIsSecureProcess )
    return 3221225659LL;
  if ( !a1 )
    return 3221225485LL;
  v7 = *a1;
  if ( !*a1 )
  {
    v8 = 0LL;
    v9 = 0;
    if ( a2 )
    {
      do
      {
        v10 = *(_QWORD *)(a3 + 8LL * v9);
        if ( v10 )
          v8 = *(unsigned __int16 *)(v10 + 2) + (unsigned int)v8;
        ++v9;
      }
      while ( v9 != a2 );
    }
    CaptureBuffer = CsrAllocateCaptureBuffer(a2, v8);
    v7 = CaptureBuffer;
    if ( !CaptureBuffer )
      return 3221225495LL;
    v3 = LdrpIsSecureProcess;
    *a1 = CaptureBuffer;
  }
  v12 = 0;
  if ( a2 )
  {
    do
    {
      v13 = *(unsigned __int16 **)(a3 + 8LL * v12);
      if ( v13 )
      {
        if ( !v3 )
        {
          CsrCaptureMessageString(v7, *((_QWORD *)v13 + 1), *v13, v13[1], *(_QWORD *)(a3 + 8LL * v12));
          v14 = v13[1];
          if ( v14 > *v13 && (unsigned __int64)(v14 - *v13) >= 2 )
            *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1)) = 0;
        }
      }
      ++v12;
    }
    while ( v12 != a2 );
  }
  return 0LL;
}
