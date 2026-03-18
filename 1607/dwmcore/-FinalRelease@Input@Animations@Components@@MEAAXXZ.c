/*
 * XREFs of ?FinalRelease@Input@Animations@Components@@MEAAXXZ @ 0x1800AB840
 * Callers:
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB7AC (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ??_EConstantInput@Animations@Components@@MEAAPEAXI@Z @ 0x1800AB910 (--_EConstantInput@Animations@Components@@MEAAPEAXI@Z.c)
 */

void __fastcall Components::Animations::Input::FinalRelease(
        void *(__fastcall ***this)(Components::Animations::ConstantInput *__hidden this, unsigned int))
{
  void *(__fastcall *v1)(Components::Animations::ConstantInput *__hidden, unsigned int); // rax

  if ( this )
  {
    v1 = **this;
    if ( v1 == Components::Animations::ConstantInput::`vector deleting destructor' )
      Components::Animations::ConstantInput::`vector deleting destructor'(
        (Components::Animations::ConstantInput *)this,
        1u);
    else
      v1((Components::Animations::ConstantInput *)this, 1u);
  }
}
