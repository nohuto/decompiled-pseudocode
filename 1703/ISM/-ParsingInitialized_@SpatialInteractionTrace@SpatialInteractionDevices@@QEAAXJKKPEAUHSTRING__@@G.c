/*
 * XREFs of ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEAUHSTRING__@@GGGGGE@Z @ 0x180098D64
 * Callers:
 *     wil::details::lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___::_lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___ @ 0x18009B1FC (wil--details--lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___--_lambda_call__lambda_4173.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        int a4,
        HSTRING string,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  HSTRING v11; // rdi
  __int64 v12; // rbx
  PCWSTR StringRawBuffer; // rax
  PCWSTR v14; // rdx
  __int64 v15; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-D0h] BYREF
  int *v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A8h]
  int *v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  int *v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  PCWSTR v23; // [rsp+88h] [rbp-80h]
  int v24; // [rsp+90h] [rbp-78h]
  int v25; // [rsp+94h] [rbp-74h]
  char *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  char *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  char *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  char *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  char *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  char *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+140h] [rbp+38h] BYREF
  int v39; // [rsp+148h] [rbp+40h] BYREF
  int v40; // [rsp+150h] [rbp+48h] BYREF

  v40 = a4;
  v39 = a3;
  v38 = a2;
  v11 = string;
  v12 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v12 > 4u && (*(_BYTE *)(v12 + 16) & 2) != 0 && (*(_QWORD *)(v12 + 24) & 2LL) == *(_QWORD *)(v12 + 24) )
  {
    v18 = 4LL;
    v17 = &v38;
    v20 = 4LL;
    v19 = &v39;
    v21 = &v40;
    v22 = 4LL;
    if ( v11 )
      StringRawBuffer = WindowsGetStringRawBuffer(v11, 0LL);
    else
      StringRawBuffer = L"?";
    v14 = (PCWSTR)&unk_1800AE6CC;
    LODWORD(v15) = 0;
    if ( StringRawBuffer )
    {
      v14 = StringRawBuffer;
      v15 = -1LL;
      do
        ++v15;
      while ( StringRawBuffer[v15] );
    }
    v23 = v14;
    v24 = 2 * v15 + 2;
    v26 = &a6;
    v28 = &a7;
    v30 = &a8;
    v32 = &a9;
    v34 = &a10;
    v36 = &a11;
    v25 = 0;
    v27 = 2LL;
    v29 = 2LL;
    v31 = 2LL;
    v33 = 2LL;
    v35 = 2LL;
    v37 = 1LL;
    TlgWrite((TraceLoggingHProvider)v12, &unk_1800BB87C, 0LL, 0LL, 0xCu, &pData);
  }
}
