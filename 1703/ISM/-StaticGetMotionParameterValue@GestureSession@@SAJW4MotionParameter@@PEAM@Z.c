/*
 * XREFs of ?StaticGetMotionParameterValue@GestureSession@@SAJW4MotionParameter@@PEAM@Z @ 0x180036C8C
 * Callers:
 *     ?GetMotionParameterValue@GestureSession@@UEAAJW4MotionParameter@@PEAM@Z @ 0x180036C80 (-GetMotionParameterValue@GestureSession@@UEAAJW4MotionParameter@@PEAM@Z.c)
 * Callees:
 *     ?RefreshMotionValues@GestureSession@@SAJXZ @ 0x180037180 (-RefreshMotionValues@GestureSession@@SAJXZ.c)
 */

__int64 __fastcall GestureSession::StaticGetMotionParameterValue(int a1, float *a2)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  float v8; // xmm0_4
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx

  if ( !a2 )
    return 2147942487LL;
  if ( GestureSession::s_refreshMotionValues )
  {
    GestureSession::RefreshMotionValues();
    GestureSession::s_refreshMotionValues = 0;
  }
  if ( a1 > 5 )
  {
    v9 = a1 - 6;
    if ( !v9 )
    {
      v8 = GestureSession::s_motionCompressLimit;
      goto LABEL_26;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v8 = GestureSession::s_motionSpringFactor;
      goto LABEL_26;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v8 = GestureSession::s_motionSpringPower;
      goto LABEL_26;
    }
    if ( v11 == 1 )
    {
      v8 = GestureSession::s_motionDamperFactor;
      goto LABEL_26;
    }
    return 2147942487LL;
  }
  if ( a1 == 5 )
  {
    v8 = GestureSession::s_motionCompressOffsetY;
    goto LABEL_26;
  }
  if ( !a1 )
  {
    v8 = GestureSession::s_motionFriction;
    goto LABEL_26;
  }
  v5 = a1 - 1;
  if ( !v5 )
  {
    v8 = GestureSession::s_motionParkingSpeed;
    goto LABEL_26;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = GestureSession::s_motionMaximumSpeed;
    goto LABEL_26;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = GestureSession::s_motionCompressPercent;
    goto LABEL_26;
  }
  if ( v7 != 1 )
    return 2147942487LL;
  v8 = GestureSession::s_motionCompressOffsetX;
LABEL_26:
  *a2 = v8;
  return 0LL;
}
