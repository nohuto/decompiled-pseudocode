/*
 * XREFs of ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x180168B54
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     _lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator() @ 0x1801687F0 (_lambda_aa746e2ed241174a5cc881b0a8c3db18_--operator().c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z @ 0x1801689CC (-ClearAllConfigurations@CChainingHelper@@QEAAXPEBVCInteractionTracker@@@Z.c)
 * Callees:
 *     ??$RunForAllAxes@V_lambda_9527f4ed72f1bc5b26231b03526f6435_@@@CChainingHelper@@AEAAXAEBV_lambda_9527f4ed72f1bc5b26231b03526f6435_@@@Z @ 0x18016867C (--$RunForAllAxes@V_lambda_9527f4ed72f1bc5b26231b03526f6435_@@@CChainingHelper@@AEAAXAEBV_lambda_.c)
 *     ??$RunForAllAxes@V_lambda_aeb1700ca247300f80dee8f8704cee6d_@@@CChainingHelper@@AEAAXAEBV_lambda_aeb1700ca247300f80dee8f8704cee6d_@@@Z @ 0x180168704 (--$RunForAllAxes@V_lambda_aeb1700ca247300f80dee8f8704cee6d_@@@CChainingHelper@@AEAAXAEBV_lambda_.c)
 *     ??$RunForAllAxes@V_lambda_fa3f57b243b2b34f332efb569b2e2921_@@@CChainingHelper@@AEAAXAEBV_lambda_fa3f57b243b2b34f332efb569b2e2921_@@@Z @ 0x180168790 (--$RunForAllAxes@V_lambda_fa3f57b243b2b34f332efb569b2e2921_@@@CChainingHelper@@AEAAXAEBV_lambda_.c)
 */

void __fastcall CChainingHelper::UpdateConfigurationIfDirty(
        CChainingHelper *this,
        struct CInteraction *a2,
        __int64 a3,
        __int64 a4)
{
  CChainingHelper *v4; // rbx
  int v5; // eax
  CChainingHelper *v6; // rdx
  __int64 v7; // r10
  struct CInteraction **v8; // [rsp+20h] [rbp-20h] BYREF
  CChainingHelper *v9; // [rsp+28h] [rbp-18h]
  int *v10; // [rsp+30h] [rbp-10h]
  char v11; // [rsp+50h] [rbp+10h] BYREF
  struct CInteraction *v12; // [rsp+58h] [rbp+18h] BYREF
  int v13; // [rsp+60h] [rbp+20h] BYREF

  v12 = a2;
  v4 = this;
  if ( (*((_BYTE *)this + 36) & 1) != 0 )
  {
    v5 = 0;
    LOBYTE(a3) = 0;
    v13 = 0;
    LOBYTE(a4) = 0;
    v11 = 0;
    v6 = this;
    v7 = 3LL;
    do
    {
      LOBYTE(this) = *(_BYTE *)v6;
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        v5 |= *((_DWORD *)v6 + 1);
        LOBYTE(a4) = 1;
        LOBYTE(this) = ((unsigned __int8)this & 2) != 0;
        LOBYTE(a3) = (unsigned __int8)this | a3;
      }
      v6 = (CChainingHelper *)((char *)v6 + 12);
      --v7;
    }
    while ( v7 );
    v13 = v5;
    v8 = &v12;
    v11 = a3;
    if ( (_BYTE)a4 )
    {
      v9 = (CChainingHelper *)&v11;
      v10 = &v13;
      CChainingHelper::RunForAllAxes<_lambda_fa3f57b243b2b34f332efb569b2e2921_>((__int64)this, (__int64)&v8);
    }
    else
    {
      v9 = v4;
      CChainingHelper::RunForAllAxes<_lambda_9527f4ed72f1bc5b26231b03526f6435_>((__int64)this, (__int64)&v8, a3, a4);
    }
    *((_BYTE *)v4 + 36) &= ~1u;
  }
  if ( (*((_BYTE *)v4 + 36) & 2) != 0 )
  {
    v9 = v4;
    v8 = &v12;
    CChainingHelper::RunForAllAxes<_lambda_aeb1700ca247300f80dee8f8704cee6d_>((__int64)this, (__int64)&v8, a3, a4);
    *((_BYTE *)v4 + 36) &= ~2u;
  }
}
