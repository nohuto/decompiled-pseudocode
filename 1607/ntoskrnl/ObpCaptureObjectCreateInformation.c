/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x140418630
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     ObpCaptureObjectName @ 0x1404188B0 (ObpCaptureObjectName.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     SeComputeQuotaInformationSize @ 0x14051D9E0 (SeComputeQuotaInformationSize.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        unsigned __int8 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  int v7; // r9d
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r12d
  _QWORD *v15; // r13
  __int64 v16; // rcx
  int v17; // [rsp+3Ch] [rbp-4Ch] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+48h] [rbp-40h]
  __int64 v20; // [rsp+50h] [rbp-38h]

  v7 = a2;
  v18 = 0LL;
  result = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 0LL;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  *(_QWORD *)(a5 + 56) = 0LL;
  if ( !a3 )
    return result;
  *(_BYTE *)(a5 + 16) = a1;
  if ( a1 && KeGetCurrentThread()->PreviousMode && (a3 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *(_DWORD *)a3 == 48 )
  {
    *(_QWORD *)(a5 + 8) = *(_QWORD *)(a3 + 8);
    v10 = *(_DWORD *)(a3 + 24);
    if ( a2 )
      v10 &= ~0x200u;
    if ( (v10 & 0xFFFEE00D) != 0 )
    {
      v14 = -1073741811;
    }
    else
    {
      *(_DWORD *)a5 = v10;
      v11 = *(_QWORD *)(a3 + 16);
      v18 = v11;
      v12 = *(_QWORD *)(a3 + 32);
      v20 = v12;
      v13 = *(_QWORD *)(a3 + 40);
      v19 = v13;
      if ( v13 )
      {
        if ( a1 )
        {
          if ( KeGetCurrentThread()->PreviousMode && (v19 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v13 = v19;
          v12 = v20;
          v11 = v18;
        }
        *(_QWORD *)(a5 + 48) = *(_QWORD *)v13;
        *(_DWORD *)(a5 + 56) = *(_DWORD *)(v13 + 8);
      }
      if ( v12 )
      {
        v15 = (_QWORD *)(a5 + 32);
        LOBYTE(v7) = 1;
        v14 = SeCaptureSecurityDescriptor(v12, a1, 1, v7, a5 + 32);
        if ( v14 < 0 )
        {
          *v15 = 0LL;
          goto LABEL_35;
        }
        SeComputeQuotaInformationSize(*v15, &v17);
        *(_DWORD *)(a5 + 28) = v17;
      }
      if ( !v13 )
        goto LABEL_22;
      *(_DWORD *)(a5 + 48) = 12;
      *(_QWORD *)(a5 + 40) = a5 + 48;
      if ( *(_BYTE *)(a5 + 56) >= 2u )
      {
        v14 = -1073741811;
      }
      else
      {
        if ( *(_DWORD *)(a5 + 52) <= 3u )
        {
LABEL_22:
          if ( v11 )
          {
            v14 = ObpCaptureObjectName(a1, v11, a4, a6);
            if ( v14 >= 0 )
              return 0LL;
          }
          else
          {
            if ( !*(_QWORD *)(a5 + 8) )
              return 0LL;
            v14 = -1073741773;
          }
          goto LABEL_35;
        }
        v14 = -1073741659;
      }
    }
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_35:
  v16 = *(_QWORD *)(a5 + 32);
  if ( v16 )
  {
    LOBYTE(a3) = 1;
    SeReleaseSecurityDescriptor(v16, *(unsigned __int8 *)(a5 + 16), a3);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v14;
}
