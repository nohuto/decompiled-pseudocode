/*
 * XREFs of ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C57F4
 * Callers:
 *     DoPrediction @ 0x1C01C72E0 (DoPrediction.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C524C (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x1C01C71D0 (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 */

void __fastcall InitializeContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 x; // rax
  __int64 v13; // rax
  __int64 y; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-10h] BYREF
  __int64 v18; // [rsp+90h] [rbp+48h] BYREF
  struct tagPOINT v19; // [rsp+98h] [rbp+50h]
  struct tagPOINT v20; // [rsp+A0h] [rbp+58h]
  __int64 v21; // [rsp+A8h] [rbp+60h] BYREF

  v20 = a3;
  v19 = a2;
  memset(a4, 0, 0x1B0uLL);
  memset((char *)a4 + 864, 0, 0x1B0uLL);
  memset((char *)a4 + 432, 0, 0x1B0uLL);
  memset((char *)a4 + 1296, 0, 0x1B0uLL);
  v7 = gPredictorRLSLambdaLearningRate;
  v8 = gPredictorRLSLambdaMax;
  v9 = gPredictorRLSLambdaMin;
  v10 = gPredictorRLSDelta;
  v18 = gPredictorRLSLambdaLearningRate;
  v21 = gPredictorRLSLambdaMax;
  v16 = gPredictorRLSLambdaMin;
  v17[0] = gPredictorRLSDelta;
  Prediction::tagRlsFilter::vInit(a4, v17, &v16, &v21, &v18);
  memset((char *)a4 + 1728, 0, 0x20uLL);
  v11 = gPredictorRLSExpoSmoothAlpha;
  *((_QWORD *)a4 + 232) = 0LL;
  *((_QWORD *)a4 + 233) = 0LL;
  if ( (__int64 *)((char *)a4 + 1856) != &v18 )
    *((_QWORD *)a4 + 232) = v11;
  x = v20.x;
  *((_QWORD *)a4 + 276) = 0LL;
  x <<= 32;
  *((_QWORD *)a4 + 268) = x;
  *((_QWORD *)a4 + 272) = x;
  v18 = v7;
  v21 = v8;
  v17[0] = v9;
  v16 = v10;
  Prediction::tagRlsFilter::vInit((char *)a4 + 864, &v16, v17, &v21, &v18);
  memset((char *)a4 + 1792, 0, 0x20uLL);
  *((_QWORD *)a4 + 236) = 0LL;
  *((_QWORD *)a4 + 237) = 0LL;
  if ( (__int64 *)((char *)a4 + 1888) != &v18 )
    *((_QWORD *)a4 + 236) = v11;
  v13 = v19.x;
  *((_QWORD *)a4 + 278) = 0LL;
  v13 <<= 32;
  *((_QWORD *)a4 + 270) = v13;
  *((_QWORD *)a4 + 274) = v13;
  v18 = v7;
  v21 = v8;
  v17[0] = v9;
  v16 = v10;
  Prediction::tagRlsFilter::vInit((char *)a4 + 432, &v16, v17, &v21, &v18);
  memset((char *)a4 + 1760, 0, 0x20uLL);
  *((_QWORD *)a4 + 234) = 0LL;
  *((_QWORD *)a4 + 235) = 0LL;
  if ( (__int64 *)((char *)a4 + 1872) != &v18 )
    *((_QWORD *)a4 + 234) = v11;
  y = v20.y;
  *((_QWORD *)a4 + 277) = 0LL;
  y <<= 32;
  v18 = v7;
  *((_QWORD *)a4 + 269) = y;
  *((_QWORD *)a4 + 273) = y;
  v21 = v8;
  v17[0] = v9;
  v16 = v10;
  Prediction::tagRlsFilter::vInit((char *)a4 + 1296, &v16, v17, &v21, &v18);
  memset((char *)a4 + 1824, 0, 0x20uLL);
  *((_QWORD *)a4 + 238) = 0LL;
  *((_QWORD *)a4 + 239) = 0LL;
  if ( (__int64 *)((char *)a4 + 1904) != &v18 )
    *((_QWORD *)a4 + 238) = v11;
  v15 = (__int64)v19.y << 32;
  *((_QWORD *)a4 + 271) = v15;
  *((_QWORD *)a4 + 275) = v15;
  *((_QWORD *)a4 + 279) = 0LL;
  *((_QWORD *)a4 + 262) = 0LL;
  *((_QWORD *)a4 + 263) = 0LL;
  *((_QWORD *)a4 + 264) = 0LL;
  *((_QWORD *)a4 + 265) = 0LL;
  memset((char *)a4 + 1920, 0, 0x58uLL);
  *((_DWORD *)a4 + 480) = 3;
  memset((char *)a4 + 2008, 0, 0x58uLL);
  *((_DWORD *)a4 + 502) = 3;
  LODWORD(v18) = 0;
  v21 = 0LL;
  v17[0] = 0LL;
  Prediction::tagRlsFilter::Filter((__int64 *)a4, &v16, (__int64)v17, (__int64)&v21, &v18);
  v21 = 0LL;
  v17[0] = 0LL;
  Prediction::tagRlsFilter::Filter((__int64 *)a4 + 54, &v16, (__int64)v17, (__int64)&v21, &v18);
  v21 = 0LL;
  v17[0] = 0LL;
  Prediction::tagRlsFilter::Filter((__int64 *)a4 + 108, &v16, (__int64)v17, (__int64)&v21, &v18);
  v21 = 0LL;
  v17[0] = 0LL;
  Prediction::tagRlsFilter::Filter((__int64 *)a4 + 162, &v16, (__int64)v17, (__int64)&v21, &v18);
  *a5 = v19;
  *a6 = v20;
}
